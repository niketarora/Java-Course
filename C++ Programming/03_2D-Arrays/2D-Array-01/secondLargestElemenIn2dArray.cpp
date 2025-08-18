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
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int max = INT_MIN;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] > max)    max = arr[i][j];
        }
    }
    int smax = INT_MIN;
    for(int i=0; i<=n-1;i++){
        for(int j=0; j<n; j++){
            if(max != arr[i][j] && smax < arr[i][j])   smax = arr[i][j];
        }
    }
    cout<<max<<endl;
    cout<<smax<<endl;
}