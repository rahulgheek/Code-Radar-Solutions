#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    long a;
    scanf("%ld",&a);
    (a&4294967296 == 4294967296)?printf("Set"):printf("Not Set");
    return 0;
}