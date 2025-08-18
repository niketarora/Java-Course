#include <iostream>
#include <vector>
using namespace std;
vector<int> getRow(int rowIndex) {
        vector<vector<int> > v;
        for(int i=0; i<=rowIndex; i++){
            vector<int> a(i+1);
            v.push_back(a);
            for(int j=0; j<=i; j++){
                if(j==0 || j==i)    v[i][j]=1;
                else    v[i][j] = v[i-1][j] + v[i-1][j-1];
            }
        }
    return v[rowIndex];
}
int main(){
    int n;
    cout<<"Enter Numbers of rows";
    cin>>n;
    vector<int> v = getRow(n);
    for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
    }
    return 0;
}