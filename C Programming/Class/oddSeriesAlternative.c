#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter the number of terms (n):- ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int term = (2 * i - 1);
        if (i % 2 == 0)     sum -= term;
        else      sum += term;
    }
    printf("The sum of the series is: %d \n",sum);
    return 0;
}