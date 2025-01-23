#include <stdio.h>

int main() {
    int b;
    char a[100] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    scanf("%d",&b);
    printf("%s",a[b]);
    return 0;
}