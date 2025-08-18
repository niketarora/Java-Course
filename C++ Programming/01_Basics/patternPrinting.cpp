// 1
// 1 2
// 1 2 3
// 1 2 3 4
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :-  ";
//     cin>>n;
//     for(int i=1; i<=n; i+
//         int temp='A';
//         for(int j=1; j<=i; j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }


// A
// AB
// ABC
// ABCD
// ABCDE
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :-  ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         int temp='A';
//         for(int j=1; j<=i; j++){
//             cout<<(char)temp++<<" ";
//         }
//         cout<<endl;
//     }
// }


// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// #include <iostream>
// using namespace std;
// int temp = 1;
// int main(){
//     int n;
//     cout<<"Enter the number :-  ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<temp++;
//         }
//         cout<<endl;
//     }
// }


// *
// ***
// *****
// *******
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :-  ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<2*i; j++){
//             cout<<'*';
//         }
//         cout<<endl;
//     }
// }


// 1 
// 1 3
// 1 3 5
// 1 3 5 7
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :-  ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         int a =1;
//         for(int j=1; j<=i; j++){
//             cout<<a;
//             a += 2;
//         }
//         cout<<endl;
//     }
// }


// A B C D
// A B C D
// A B C D
// A B C D
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :-  ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             int value = 64 + j;
//             cout<<(char)value;
//         }
//         cout<<endl;
//     }
// }


// * * * *
// * * *
// * *
// *
//#include <iostream>
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


//     *    
//     *
// * * * * *
//     *
//     *  
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :-  ";
//     cin>>n;
//     int mid = n/2 + 1;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             if(i == mid || j == mid) cout<<'*'<<' ';
//             else cout<<' '<<' ';
//         }
//         cout<<endl;
//     }
// }


// *       *
//   *   * 
//     *
//   *   * 
// *       *
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :-  ";
//     cin>>n;
//     int mid = n/2 + 1;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             if(i == j || (j+i) == n+1) cout<<'*'<<' ';
//             else cout<<' '<<' ';
//         }
//         cout<<endl;
//     }
// }


// 1
// 01
// 101
// 0101
// 10101
// 010101
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :-  ";
//     cin>>n;
//     int a = 5;
//     for(int i=1; i<=n; i++){
//         if(i%2 != 0) a = 1;
//         else a = 0;
//         for(int j=1; j<=i; j++){
//             cout<<a;
//             if(a ==1) a = 0;  // fliping condition
//             else a = 1;
//         }
//         cout<<endl;
//     }
// }


//         *
//       * *
//     * * *
//   * * * *
// * * * * *
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :-  ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<' '<<' ';
//         }
//         for (int k=1; k<=i; k++){
//             cout<<'*'<<' ';
//         }
//         cout<<endl;
//     }
// }


//       * * * *
//     * * * *
//   * * * *  
// * * * * 
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :-  ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<' '<<' ';
//         }
//         for (int k=1; k<=n; k++){
//             cout<<'*'<<' ';
//         }
//         cout<<endl;
//     }
// }


//         *
//       * * *
//     * * * * *
//   * * * * * * *
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :-  ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<' '<<' ';
//         }
//         for (int k=1; k<=i; k++){
//             cout<<'*'<<' ';
//         }
//         for (int l=1; l<=i-1; l++){
//             cout<<'*'<<' ';
//         }
//         cout<<endl;
//     }
// }

// Alternate Method-1
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :-  ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<' '<<' ';
//         }
//         for(int k=1; k<2*i; k++){
//             cout<<'*'<<' ';
//         }
//         cout<<endl;
//     }
// }

// Alternate Method-2
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :-  ";
//     cin>>n;
//     int nst = 1;    // nst-no of stars
//     int nsp = n-1;  // nsp-no of spaces
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=nsp; j++){
//             cout<<' '<<' ';
//         }
//         nsp--;
//         for(int k=1; k<=nst; k++){
//             cout<<'*'<<' ';7
//         }
//         nst +=2;
//         cout<<endl;
//     }
// }


//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :-  ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<' '<<' ';
//         }
//         for (int k=1; k<=i; k++){
//             cout<<k<<' ';
//         }
//         for (int l=i-1; l>=1; l--){
//             cout<<l<<' ';
//         }
//         cout<<endl;
//     }
// }


//       *
//     * * *
//   * * * * *
// * * * * * * * 
//   * * * * *
//     * * * 
//       *
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :-  ";
//     cin>>n;
//     int nst = 1;    // nst-no of stars
//     int nsp = n-1;  // nsp-no of spaces
//     for(int i=1; i<=2*n-1; i++){
//         // spaces
//         for(int j=1; j<=nsp; j++){
//             cout<<' '<<' ';
//         }
//         if(i <= n-1) nsp--;
//         else nsp++;
//         // stars
//         for(int k=1; k<=nst; k++){
//             cout<<'*'<<' ';
//         }
//         if(i <= n-1) nst += 2;
//         else nst -= 2;
//         cout<<endl;
//     }
// }


// * * * * * * *
// * * *   * * *
// * *       * *
// *           *
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :-  ";
//     cin>>n;
//     for(int i=1; i<=2*n+1; i++){
//         cout<<'*'<<' ';
//     }
//     cout<<endl;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n+1-i; j++){
//             cout<<'*'<<' ';
//         }
//         for(int k=1; k<=2*i-1; k++){
//             cout<<' '<<' ';
//         }
//         for(int j=1; j<=n+1-i; j++){
//             cout<<'*'<<' ';
//         }
//         cout<<endl;
//     }
// }


// 1 2 3 4 5 6 7
// 1 2 3   5 6 7
// 1 2       6 7
// 1           7
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :-  ";
//     cin>>n;
//     for(int i=1; i<=2*n+1; i++){
//         cout<<i<<' ';
//     }
//     cout<<endl;
//     for(int i=1; i<=n; i++){
//         int a = 1;
//         for(int j=1; j<=n+1-i; j++){
//             cout<<a<<' ';
//             a++;
//         }
//         for(int k=1; k<2*i; k++){
//             cout<<' '<<' ';
//             a++;
//         }
//         for(int j=1; j<=n+1-i; j++){
//             cout<<a<<' ';
//             a++;
//         }
//         cout<<endl;
//     }
// }


// 1 1 1 1
// 1 2 2 2
// 1 2 3 3
// 1 2 3 4 
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :-  ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             cout<<min(i,j);
//         }
//         cout<<endl;
//     }
// }


// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :-  ";
//     cin>>n;
//     for(int i=1; i<=2*n-1; i++){
//         for(int j=1; j<=2*n-1; j++){
//             int a = i;
//             int b = j;
//             if(a>n) a=2*n-i;
//             if(b>n) b=2*n-j;
//             int x = min(a,b);
//             cout<<n-x+1<<" ";
//         }
//         cout<<endl;
//     }
// }