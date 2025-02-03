#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    a = a>>b;
    (a&1 == 1)?printf("%d",1):printf("%d",0);
    return 0;
}