#include <iostream>
#include <vector>
using namespace std;
void display_Output(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << v[i] << " ";
    }
}
void merge(vector<int> &v, int low, int mid, int high)
{
    int l = low;
    int m = mid+1;
    int h = high;
    int k = low;
    int n = v.size();
    vector<int> gg(n + 1, 0);
    while (l <=mid and m <=high)
    {
        if (v[l] <v[m])
        {
            gg[k] = v[l];
            l++;
            k++;
        }
        else
        {
            gg[k] = v[m];
            m++;
            k++;
        }
    }
    while (l <=mid)
    {
        gg[k] = v[l];
        l++;
        k++;
    }

    while (m <=h)
    {
        gg[k] = v[m];
        m++;
        k++;
    }
    for (int i = low; i<=high; i++)
    {
        v[i] = gg[i];
    }
}
void merge_Sort(vector<int> &v, int low, int high)
{
    int mid;
    if(low < high)
    {
        mid = (low + high) / 2;
        merge_Sort(v, low, mid);
        merge_Sort(v, mid+1, high);
        merge(v, low, mid, high);
    }
}
int main()
{
    vector<int> v{34, 64, 2, 6, 76, 3, 45, 3, 4, 5, 46, 56, 47, 4};
    int n = v.size();

    merge_Sort(v, 0, n);
    display_Output(v, n);
    return 69;
}