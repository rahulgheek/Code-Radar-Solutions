#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    (a&32 == 32)?printf("Set"):printf("Not Set");
    return 0;
}