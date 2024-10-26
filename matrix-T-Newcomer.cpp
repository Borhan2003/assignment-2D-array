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
            ;
        }
    }
    int s1=0,s2=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                s1 = s1 + arr[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                s2 = s2 + arr[i][j];
            }
        }
    }

    int s = abs(s1 - s2);
 cout<<s<<endl;
    return 0;
}