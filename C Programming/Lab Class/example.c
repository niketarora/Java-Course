#include <stdio.h>

int main() {
    int i = 0;
    do {
        if (i == 2)
            continue;
        printf("%d ", i);
        i++;
    } while (i < 5);
    return 0;
}