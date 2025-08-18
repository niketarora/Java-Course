#include <iostream>
using namespace std;
int main(){
    int arr[] = {4,2,5,1,7};
    int *ptr = arr;      // int *ptr = &arr[0];
    cout<<ptr<<endl;
    ptr[0] = 8;
    //first method of printing
    for(int i=0;i<=4; i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
        //method to update an array
        *ptr = 9;
        ptr++;
        *ptr = 10;
        ptr--;
    //Second method of printing
    for(int i=0;i<=4; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
}