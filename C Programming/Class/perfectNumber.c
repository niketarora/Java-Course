#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n/2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n && n > 0)     printf("%d is a Perfect Number.", n);
    else    printf("%d is NOT a Perfect Number.", n);
    return 0;
}
