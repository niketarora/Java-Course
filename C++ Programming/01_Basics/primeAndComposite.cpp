// check weather the given number is prime or composite
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :-  ";
    cin>>n;
    bool flag =  true;
    for(int i=2; i<=n-1; i++){
        if (n%i == 0){
            flag = false;
            break;
        }
    }
    if (n==1) cout<<"1 is neither prime nor composite";
    else if(flag==true) cout<<n<<"  is prime";
    else cout<<n<<"  is composite";
}

// print all the odd numbers till n
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :-  ";
//     cin>>n;
//     int a = 1;
//     for(int i=1; i<=n; i++){
//         cout<<a<<endl;
//         a = a + 2;
//     }
// }

//sum of all the digits of a given number
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :-  ";
//     cin>>n;
//     int sum = 0;
//     while(n>0){
//         sum = sum + n%10;
//         n = n/10;
//     }
//     cout<<sum<<endl;
// }

// reverse a given number
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :-  ";
//     cin>>n;
//     int digit = 0;
//     int num = 0;
//     while(n>0){
//         num *= 10;
//         digit = n%10;
//         num = num + digit;
//         n = n/10;
//     }
//     cout<<num;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :-  ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n+1-i; j++){
//             cout<<'*';
//         }
//         cout<<endl;
//     }
// }