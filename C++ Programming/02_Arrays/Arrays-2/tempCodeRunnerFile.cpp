#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the order of array :- ";
    cin>>n;    
    int arr[n];
    //input
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    //Largest num
    int max = INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(arr[i] > max)    max = arr[i];  
    }
    //Second largest num
    int smax = INT_MIN;
    for(int i=0; i<=n-1;i++){
        if(max!=arr[i] && smax<arr[i])   smax=arr[i];
    }
    //Third largest num
    int tmax = INT_MIN;
    for(int i=0; i<=n-1;i++){
        if(max!=arr[i] && smax!=arr[i] && tmax<arr[i])  tmax=arr[i];
    }
    cout<<max<<endl;
    cout<<smax<<endl;
    cout<<tmax;
}
