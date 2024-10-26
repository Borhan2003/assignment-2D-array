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
    int row;
    cin>>row;
    for(int i=row;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j]=arr[i+1][j];
        }
    }
    n--;
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<< arr[i][j];
        }
        cout<<endl;
    }

    return 0;
}