#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int a[r][c], b[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> b[i][j];
        }
    }
    int f = 1;
    for (int i = 0; i < r; i++)
    {
        for (int j = c - 1, k = 0; j >= 0 and k < c; j--, k++)
        {
            if (a[i][j] != b[i][k])
                f = 0;
        }
    }
    if (f)
        cout << "Y";
    else
        cout << "N";

    return 0;
}
