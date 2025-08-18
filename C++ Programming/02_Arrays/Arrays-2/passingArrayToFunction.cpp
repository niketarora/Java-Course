#include <iostream>
#
using namespace std;
void display(int a[], int size){
    for(int i=0; i<=size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int b[], int size){
    b[0] = 100;
    return;
}
int main(){
    int arr[5]={1,4,2,7,46};
    int size=sizeof(arr)/4;
    display(arr, size);
    change(arr, size);
    display(arr, size);
}
