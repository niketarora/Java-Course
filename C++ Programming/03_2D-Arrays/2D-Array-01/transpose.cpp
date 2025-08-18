#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter Numbers of Rows:- ";
    cin>>m;
    cout<<"Enter Numbers of Columns:- ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter Elements of the array:- \n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Here is the transpose:- \n";
    for(int j=0; j<n; j++){
        for(int i=0; i<m; i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}