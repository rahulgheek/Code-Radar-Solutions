#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    (a>>31 == 0)?printf("Not Set"):printf("Set")
}