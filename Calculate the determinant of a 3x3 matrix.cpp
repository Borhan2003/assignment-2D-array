#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    int x;
    cin >> n >> m;
    // cin>>x;
    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            ;
        }
    }
    int a = mat[0][0], b = mat[0][1], c = mat[0][2];
    int d = mat[1][0], e = mat[1][1], f = mat[1][2];
    int g = mat[2][0], h = mat[2][1], i = mat[2][2];

    int determinant = a * (e * i - f * h) - b * (d * i - f * g) + c * (d * h - e * g);
    cout << determinant << endl;
    return 0;
}