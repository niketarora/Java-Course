#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main() {
    int arr[] = {2,-3,4,4,-7,-1,4,-2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    int prevNeg = 1;
    int ans[n-k+1];
    for(int i=0; i<k; i++){
        if(arr[i]<0){
            prevNeg = arr[i];
            break;
        }
    }
    if(prevNeg == 1)  ans[0] = 1;
    else    ans[0] = prevNeg;
    // sliding window
    int i = 1;
    int j = k;
    while(j<n){ // tno = n-k
        if(prevNeg>=i)    ans[i] = arr[prevNeg];
        else{
            prevNeg = -1;
            for(int x=i; x<=j; x++){
                if(arr[x]<0){
                    prevNeg = x;
                    break;
                }
            }
            if(prevNeg!=-1) ans[i] = arr[prevNeg];
            else ans[i] = 1;
        }
        i++;
        j++;
    }
    for(int i=0; i<n-k+1; i++){
        cout<<ans[i]<<" ";
    }
}