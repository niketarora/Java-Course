#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main() {
    int arr[] = {7,1,2,5,8,4,9,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int maxSum = INT_MIN;
    int maxIdx = 0;
    int sum = 0;
    for(int i=0; i<k; i++){ // tno = k
        sum += arr[i];
    }
    maxSum = sum;
    // sliding window
    int i = 1;
    int j = k;
    while(j<n){ // tno = n-k
        sum = sum + arr[j] - arr[i-1];
        if(maxSum<sum){
            maxSum = sum;
            maxIdx = i;
        }
        i++;
        j++;
    }
    // TC = O(n)
    cout<<maxSum<<endl;
    cout<<maxIdx;
}