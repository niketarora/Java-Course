#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter order of array";
    cin>>n;
    int arr[n];
    int smallest=INT_MAX;
    // input
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    //output
    for(int i=0; i<=n; i++){
        if(arr[i]<smallest)     smallest=arr[i];
    }
    cout<<smallest;
}