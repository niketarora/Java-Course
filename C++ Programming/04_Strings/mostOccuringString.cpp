#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main(){
    string str = "raghav is a  maths teacher. he is a is DSA mentor!";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<< " ";
    }
    cout<<endl;
    int maxCount = 1;
    int count = 1;
    for(int i = 1; i < v.size(); i++) {
        if(v[i] == v[i - 1])     count++;
        else    count = 1;
        maxCount = max(maxCount, count);
    }

    count = 1;
    for(int i = 1; i < v.size(); i++) {
        if(v[i] == v[i - 1])    count++;
        else    count = 1;
        if(count == maxCount) {
            cout << v[i] << " " << maxCount;
        }
    }
}