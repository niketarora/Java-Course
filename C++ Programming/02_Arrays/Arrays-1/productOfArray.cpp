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
    int total=1;
    //Output
    for(int i=0;i<=n-1;i++){
        total *= arr[i];  
    }
    cout<<total<<endl;
}