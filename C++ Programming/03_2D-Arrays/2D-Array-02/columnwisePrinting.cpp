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
    for(int j=0; j<n; j++){
        if(j%2 == 0){
            for(int i=0; i<n; i++)
                cout<<arr[i][j]<<" ";
        }
        else
            for(int i=n-1; i>=0; i--)
                cout<<arr[i][j]<<" ";
    }
}

