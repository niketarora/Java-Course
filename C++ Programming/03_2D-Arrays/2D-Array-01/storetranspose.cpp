#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter Numbers of Rows:- ";
    cin>>m;
    cout<<"Enter Numbers of Columns:- ";
    cin>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int t[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            t[j][i] = arr[i][j];         
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}
