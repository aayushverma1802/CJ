#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
class ans
{
public:
    int solve(int n, vector<int> &a, int curr, int prev)
    {
        // base case
        if (curr == n)
        {
            return 0;
        }

        // include
        int take = 0;
        if (prev == -1 or a[curr] > a[prev])
        {
            take = 1 + solve(n, a, curr + 1, curr);
        }
        // exclude
        int notTake = 0 + solve(n, a, curr + 1, prev);
        return max(take, notTake);
    }

    int longestSubsequence(int n, vector<int> &a)
    {
        return solve(n, a, 0, -1);
    }
};
int main()
{
    vector<int> arr = {0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15};
    int N = 16;
    ans *obj;
    cout << obj->longestSubsequence(N, arr);
    return 0;
}