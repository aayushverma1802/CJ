#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    int arr2[n];
    int arr3[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            if (i == j)
            {
                arr2[i] = arr[i][j];
            }
            if (i + j == n - 1)
            {
                arr3[i] = arr[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}