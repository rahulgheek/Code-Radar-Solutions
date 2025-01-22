#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    (a&4294967296 == 4294967296)?printf("Set"):printf("Not Set");
    return 0;
}