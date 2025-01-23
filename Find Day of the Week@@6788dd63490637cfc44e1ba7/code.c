#include <stdio.h>
#include<string.h>
int main() {
    int b;
    char a[100] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    scanf("%d",&b);
    printf("%s",a[b+1]);
    return 0;
}