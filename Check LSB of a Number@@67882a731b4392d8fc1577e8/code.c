#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    (a&1 == 1)?printf("True"):printf("False");
    return 0;
}