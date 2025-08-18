#include <iostream>
#include <vector>
using namespace std;
void multiplication(vector<vector<int>> &matrix1, vector<vector<int>> &matrix2, vector<vector<int>> &matrix3) {
    int n = matrix1.size();
    int m = matrix1[0].size();
    int p = matrix2.size();
    int q = matrix2[0].size();
    int a = matrix3.size();
    int b = matrix3[0].size();
    if(m == p){
        for(int i=0;i<n;i++){
            for(int j=0;j<q;j++){
                matrix3[i][j] = 0;
                for(int k=0; k<p; k++){
                    matrix3[i][j] += matrix1[i][k]*matrix2[k][j];
                }
            }
        }
    }
}
int main(){
    int m,n;
    cout<<"Enter Numbers of Rows:- ";
    cin>>n;
    cout<<"Enter Numbers of Columns:- ";
    cin>>m;
    vector<vector<int>> arr1(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr1[i][j];
        }
    }
    int p,q;
    cout<<"Enter Numbers of Rows:- ";
    cin>>p;
    cout<<"Enter Numbers of Columns:- ";
    cin>>q;
    vector<vector<int>> arr2(p,vector<int>(q));
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            cin>>arr2[i][j];
        }
    }
    vector<vector<int>> arr3(n,vector<int>(q));
    multiplication(arr1,arr2,arr3);
    
    //display the trasposed matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
}