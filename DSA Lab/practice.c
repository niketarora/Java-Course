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