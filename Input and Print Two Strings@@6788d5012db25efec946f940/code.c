#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[20],b[20];
    scanf("%s %s",&a,&b);
    printf("You entered: %s and %s",a,b)
    return 0;
}