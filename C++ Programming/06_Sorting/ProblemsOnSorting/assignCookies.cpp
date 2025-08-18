#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end()); // 7 8 9 10
        sort(s.begin(),s.end()); // 5 6 7 8
        int count = 0;
        int i = 0;
        int j = 0;
        while(i<g.size() && j<s.size()){
            if(s[j]>=g[i]){
                count++;
                i++;
                j++;
            }
            else j++;
        }
        return count;
    }
int main(){
    vector<int> g = {16,15,14,17};
    vector<int> s = {5,6,7,8,9,10,11,12,13,14,15,16,17,18};
    int n = findContentChildren(g,s);
    cout<<n;
}