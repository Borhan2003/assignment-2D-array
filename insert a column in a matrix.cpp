#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    int x;
    cin >> n >> m;
    // cin >> x;
    m++;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m-1; j++)
        {
            cin >> arr[i][j];
        }
    }
    int col;
    cin >> col;
    int c[n];
    //m++;
   
    for (int i = 0; i < n; i++)
        cin >> c[i];
    for (int i = m-1 ; i > col; i--)
    {
        for (int j = 0; j < n; j++)
        {
            arr[j][i] = arr[j][i - 1];
        }
    }

    for (int i = 0; i < n; i++)
        arr[i][col] = c[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}