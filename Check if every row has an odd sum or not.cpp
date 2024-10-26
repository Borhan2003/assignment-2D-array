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
    int f = 1;
    for (int i = 0; i < n; i++)
    {
        int s = 0;
        for (int j = 0; j < m; j++)
        {
            s = s + arr[i][j];
        }
        if (s % 2 == 0)
            f = 0;
    }
    if (f)
        cout << "Y";
    else
        cout << "N";

    return 0;
}