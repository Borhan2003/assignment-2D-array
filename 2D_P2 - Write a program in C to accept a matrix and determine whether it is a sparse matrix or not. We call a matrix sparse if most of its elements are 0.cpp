#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    int x;
    cin >> n >> m;
    // cin >> x;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int zeroCount = 0, totalElements = n * m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                zeroCount++;
            }
        }
    }
    if (zeroCount > (totalElements / 2))
    {
        cout << "The matrix is a sparse matrix.\n";
    }
    else
    {
        cout << "The matrix is not a sparse matrix.\n";
    }
    return 0;
}