#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    int x;
    cin >> n >> m;
    //cin >> x;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            ;
        }
    }
    bool f = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int t = arr[i][j];
            bool f = true;
            int op = -t;
            if (i > 0 && arr[i - 1][j] != op)
                f = false;
            if (i < n - 1 && arr[i + 1][j] != op)
                f = false;
            if (j > 0 && arr[i][j - 1] != op)
                f = false;
            if (j < m - 1 && arr[i][j + 1] != op)
                f = false;
            if (f)
            {
                cout << arr[i][j] << " ";
            }
        }
        cout<<endl;
    }
    return 0;
}