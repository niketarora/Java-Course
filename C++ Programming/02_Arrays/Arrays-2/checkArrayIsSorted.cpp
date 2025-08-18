#include <iostream>
#include <climits>
using namespace std;
int sorter(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        if(arr[i+1] > arr[i])   return 0;
    }
    return 1;
}
int main(){
    int n;
    cout<<"Enter the order of array :- ";
    cin>>n;    
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    if (sorter(arr, n))       printf("The array is sorted in ascending order.\n");
        else     printf("The array is not sorted in ascending order.\n");
}
