#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the order of array :- ";
    cin>>n;
    int max = INT_MIN;    
    int arr[n];
    //input
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    //Output
    for(int i=0;i<=n-1;i++){
        if(arr[i] > max)    max = arr[i];  
    }
    //second largest num
    int smax = INT_MIN;
    for(int i=0; i<=n-1;i++){
        if(max!=arr[i] && smax<arr[i])   smax=arr[i];
    }
    cout<<max<<endl;
    cout<<smax;
}
