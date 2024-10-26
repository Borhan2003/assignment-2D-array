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
            
        }
    }
    for (int i = 0; i < n; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < m; j++)
        {
            rowSum += arr[i][j];
        }
        cout << "Row " << i + 1 << " sum = " << rowSum << endl;
    }
    for (int j = 0; j < m; j++)
    {
        int colSum = 0;
        for (int i = 0; i < n; i++)
        {
            colSum += arr[i][j];
        }
        cout << "Column " << j + 1 << " sum = " << colSum << endl;
    }

    return 0;
}