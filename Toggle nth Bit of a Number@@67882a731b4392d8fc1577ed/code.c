#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    d = pow(2,b);
    c = a^d;
    printf("%d",c);
    return 0;
}