#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    int x;
    cin>>n>>m;
   // cin>>x;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i][i]<<" ";
    }

    return 0;
}