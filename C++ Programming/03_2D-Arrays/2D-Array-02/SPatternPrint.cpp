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
        if(i%2 == 0){
            for(int j=0; j<n; j++)
                cout<<arr[i][j]<<" ";
        }
        else
            for(int j=n-1; j>=0; j--)
                cout<<arr[i][j]<<" ";
    }
}

