#include <stdio.h>
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
void main() 
{  
int a[5]={5,1,15,20,25}; 
int i,j,m; 
i=++a[1];   
j=a[1]++;   
m=a[i++];   
printf("%d  %d  %d",i,j,m);  
} 