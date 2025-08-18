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
    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1;
        while(minr<=maxr && minc<=maxc){
            //for right
            for(int j=minc; j<=maxc; j++){
                cout<<arr[minr][j]<<" ";
            }
            if(minr>maxr && minc>maxc)  break;
            minr++;
            //for down
            for(int i=minr; i<=maxr; i++){
                cout<<arr[i][maxc]<<" ";
            }
            maxc--;
            if(minr>maxr && minc>maxc)  break;
            //for left
            for(int j=maxc; j>=minc; j--){
                cout<<arr[maxr][j]<<" ";
            }
            maxr--;
            if(minr>maxr && minc>maxc)  break;
            //for up
            for(int i=maxr; i>=minr; i--){
                cout<<arr[i][minc]<<" ";
            }
            minc++;
        }
}
