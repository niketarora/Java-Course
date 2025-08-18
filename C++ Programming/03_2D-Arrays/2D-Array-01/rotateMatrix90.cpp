#include <iostream>
#include <vector>
using namespace std;
void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    for(int k=0;k<n;k++){ // rows
        int i=0;
        int j=n-1;
        while(j>=i){
            int temp = matrix[k][i];
            matrix[k][i] = matrix[k][j];
            matrix[k][j] = temp;
            i++;
            j--;
        }
    } 
}
int main(){
    int m,n;
    cout<<"Enter Numbers of Rows:- ";
    cin>>n;
    cout<<"Enter Numbers of Columns:- ";
    cin>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    rotate(arr);
    //display the trasposed matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
