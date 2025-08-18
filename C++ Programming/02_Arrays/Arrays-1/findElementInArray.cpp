// #include <iostream>
// #include <climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the order of array :- ";
//     cin>>n; 
//     int arr[n];
//     //input
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     cout<<"Enter the element you want to search in the array";
//     int x;
//     cin>>x;
//     //Output
//     for(int i=0;i<=n-1;i++){
//         if(arr[i] == x)    cout<<"Present";  
//     }
// }

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
    cout<<"Enter the element you want to search in the array :- ";
    int x;
    cin>>x;
    bool flag = false;
    //Output
    for(int i=0;i<=n-1;i++){
        if(arr[i] == x)    flag = true;  
    }
    if(flag == true)   cout<<"Element is Present";
    else    cout<<"Element is Absent";
}
