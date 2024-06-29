#include <iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    int trap(vector<int> height)
    {
        int n = height.size();
        // this will try to take the max of the left side.
        int l[n];
        // this will try to take the max of the right side.
        int r[n];
        // before going for search just have the max of the most left and the most right.
        l[0] = height[0];
        r[n - 1] = height[n - 1];
        // Traverse the left.
        for (int i = 1; i < n; i++)
        {
            l[i] = max(height[i], l[i - 1]);
        }
        // Traverse the right.
        for (int i = n-2; i>=0; i++)
        {
            r[i] = max(height[i], r[i+1]);
        }
        //Now compute the area of each building so to find the max trapped water
        int ans=INT_MIN;
        for(int i=1;i<n-1;i++){
            ans+=height[i]-min(l[i],r[i]);
        }
    }
};
int main()
{
    // Calling of the function generates from here.
    return 69;
}