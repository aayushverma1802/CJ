#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <climits>
using namespace std;
class Solution
{
public:
    int choco_prob(vector<int> &arr, int n, int m)
    {
        sort(arr.begin(), arr.end());
        int i = 0;
        int j = m - 1;
        int mini = INT_MAX;
        while (j < arr.size())
        {
            int diff = arr[j] - arr[i];
            mini = min(mini, diff);
            i++;
            j++;
        }
        return mini;
    }
};
int main()
{
    Solution *obj;
    vector<int>arr = {3, 4, 1, 9, 56, 7, 9, 12};
    int n=arr.size();
    int m=5;
    int ans = obj->choco_prob(arr, n, m);
    cout << ans;
    return 69;
}