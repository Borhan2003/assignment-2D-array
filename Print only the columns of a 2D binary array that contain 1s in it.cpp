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
    for (int j = 0; j < m; j++)
    {
        bool one = false;

        for (int i = 0; i < n; i++)
        {
            if (arr[i][j] == 1)
            {
                one = true;
                break;
            }
        }
        if (one)
        {
            for (int i = 0; i < n; i++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}