#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
    int n = customers.size();
    int k = minutes;
    int Idx = 0;
    int prevLoss = 0;
    for(int i=0; i<k; i++){
        if(grumpy[i] == 1)  prevLoss += customers[i];
    }
    int maxLoss = prevLoss;
    int currLoss = 0;
    int i = 1, j = k;
    while(j<n){
        currLoss = prevLoss;
        if(grumpy[j] == 1)  currLoss += customers[j];
        if(grumpy[i-1] == 1)    currLoss -= customers[i-1];
        if(maxLoss < currLoss){
            maxLoss = currLoss;
            Idx = i;
        }
        prevLoss = currLoss;
        i++;
        j++;
    }
    for(int i=Idx; i<Idx+k; i++){
        grumpy[i] = 0;
    }
    int sat = 0;
    for(int i=0; i<n; i++){
        if(grumpy[i] == 0)    sat += customers[i];
    }
    return sat;
}
int main() {
    int minutes = 1;
    vector<int> customers = {9,10,4,5};
    vector<int> grumpy = {1,0,1,1};
    cout<<maxSatisfied(customers,grumpy,minutes);
}