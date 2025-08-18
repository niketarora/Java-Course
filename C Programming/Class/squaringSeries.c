#include <stdio.h>
#include <math.h>
int main(){
    int a,n;
    int sum = 0;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        sum += pow(a,i);
    }
    printf("The sum of the series is: %d \n", sum);
    return 0;
}
