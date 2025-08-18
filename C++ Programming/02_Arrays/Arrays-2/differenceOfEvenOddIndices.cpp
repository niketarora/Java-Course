#include <iostream>
using namespace std;
int main(){
    int n,sum_Even=0,sum_Odd=0;
    cout<<"Enter the order of array :- ";
    cin>>n;    
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i = 0; i <= n-1; i++) {
        if (i % 2 == 0)     sum_Odd += arr[i];
        else      sum_Even += arr[i];
    }
    int sum=sum_Even - sum_Odd;
    cout<<sum;
}
