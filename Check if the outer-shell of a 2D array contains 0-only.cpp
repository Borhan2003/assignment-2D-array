#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    int x;
    cin >> n >> m;
    // cin>>x;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            ;
        }
    }
    bool f = true;
    for (int j = 0; j < m; j++)
    {
        if (arr[0][j] != 0 || arr[n - 1][j] != 0)
        {
            f = false;
            break;
        }
    }
    if (f)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i][0] != 0 || arr[i][m - 1] != 0)
            {
                f = false;
                break;
            }
        }
    }
    if (f)
        cout << "Y";
    else
        cout << "N";

    return 0;
}