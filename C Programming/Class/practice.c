
// #include <stdio.h> 
// int series(int n){
//     int sum=0;
//     for(int i=1; i<=n; i++){
//         sum += i;
//     }
//     return sum;
// }
// void main() { 
//     int n,sum=0;
    // printf("enter the lenght of the given series:- ");
    // scanf("%d", &n);
//     for(int i=1; i<=n; i++){
//         sum += series(i);
//     }
//     printf("%d",sum);
// }


// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the Number:- ");
//     scanf("%d", &n);
//     int nst = 1;    // nst-no of stars
//     int nsp = n-1;  // nsp-no of spaces
//     for(int i=1; i<=2*n-1; i++){
//         // spaces
//         for(int j=1; j<=nsp; j++){
//             printf("  ");
//         }
//         if(i <= n-1) nsp--;
//         else nsp++;
//         // stars
//         for(int k=1; k<=nst; k++){
//             printf("* ");
//         }
//         if(i <= n-1) nst += 2;
//         else nst -= 2;
//         printf("\n");
//     }
// }

#include <stdio.h>
int a = 10, b = 20;
void c();
void d();
void e(int a, int b);
int main() {
    int a = 5, b = 6;
    c();
    printf("a = %d, b = %d\n", a, b);
    d();
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
void c() {
    int a = 1;
    d();
    printf("a = %d, b = %d\n", a, b);
    e(a, b);
    printf("a = %d, b = %d\n", a, b);
}
void d() {
    printf("a = %d, b = %d\n", a, b);
    a = 3;
    b = 4;
    e(b, a);
    printf("a = %d, b = %d\n", a, b);
}
void e(int a, int b) {
    b = 7;
    printf("a = %d, b = %d\n", a, b);
    a = 21;
    b = 22;
}
