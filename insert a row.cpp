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
    n++;
    int row;
    cin >> row;
    int r[m];
    for (int j = 0; j < m; j++)
    {
        cin >> r[j];
    }
    for (int i = n; i > row; i--)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = arr[i - 1][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        arr[row][i] = r[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}