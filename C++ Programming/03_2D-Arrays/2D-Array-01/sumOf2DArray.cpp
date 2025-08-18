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
    int arr1[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr1[i][j];
        }
    }
    int arr2[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr2[i][j];
        }
    }
    // sum
    int max = INT_MIN;
    int res[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            res[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    // print the resultant
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}