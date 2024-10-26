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
    for (int i = 0; i < n; i++)
    {
        int f = 1;
        for (int j = 0; j < m/2 ; j++)
        {
            if (arr[i][j] != arr[i][m - j - 1])
            {
                f = 0;
            }
        }
        if (f == 1)
        {
            for (int k = 0; k < m; k++)
                cout << arr[i][k] << " ";
        }
        cout << endl;
    }

    return 0;
}