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
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // transpose in the same matrix
    // METHOD-1
    // for(int i=0;i<m;i++){ // rows
    //     for(int j=i+1;j<n;j++){ // col
    //         // swapping of i,j and j,i
    //         int temp = arr[i][j];
    //         arr[i][j] = arr[j][i];
    //         arr[j][i] = temp;
    //     }
    // }

    // METHOD-2
    // for(int i=0;i<m;i++){ // rows
    //     for(int j=0;j<n;j++){ // col
    //         if(j>i){
    //             // swapping of i,j and j,i
    //             int temp = arr[i][j];
    //             arr[i][j] = arr[j][i];
    //             arr[j][i] = temp;
    //         }
    //     }
    // }
     
    //display the trasposed matrix
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
