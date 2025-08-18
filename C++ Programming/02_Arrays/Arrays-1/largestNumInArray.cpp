#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the order of array :- ";
    cin>>n;
    int largest = INT_MIN;    
    int arr[n];
    //input
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    //Output
    for(int i=0;i<=n-1;i++){
        if(arr[i]>= largest) largest = arr[i];  
    }
    cout<<largest<<endl;
}