#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    long a;
    scanf("%ld",&a);
    (a&(2**32) == (2**32))?printf("Set"):printf("Not Set");
    return 0;
}