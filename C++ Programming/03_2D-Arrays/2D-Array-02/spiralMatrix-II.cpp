#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> v(n,vector<int> (n));
        int count = 1;
        int minr=0;
        int maxr=n-1;
        int minc=0;
        int maxc=n-1;
            while(minr<=maxr && minc<=maxc){
                //for right
                for(int j=minc; j<=maxc; j++){
                    v[minr][j]=count;
                    count++;
                }
                if(minr>maxr || minc>maxc)  break;
                minr++;
                //for down
                for(int i=minr; i<=maxr; i++){
                    v[i][maxc]=count;
                    count++;
                }
                maxc--;
                if(minr>maxr || minc>maxc)  break;
                //for left
                for(int j=maxc; j>=minc; j--){
                    v[maxr][j]=count;
                    count++;
                }
                maxr--;
                if(minr>maxr || minc>maxc)  break;
                //for up
                for(int i=maxr; i>=minr; i--){
                    v[i][minc]=count;
                    count++;
                }
                minc++;
            }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
