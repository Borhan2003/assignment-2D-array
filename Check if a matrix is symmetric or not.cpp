#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    int x;
    cin >> n >> m;
    cin >> x;
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                f = false;
                break;
            }
        }
        if (!f)
            break;
    }
    if (f)
        cout << "y";
    else
        cout << "N";

    return 0;
}