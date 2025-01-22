#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    long a;
    scanf("%ld",&a);
    (a>>32);
    printf("%d",a);
}