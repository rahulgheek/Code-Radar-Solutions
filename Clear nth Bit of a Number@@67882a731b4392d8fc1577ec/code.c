#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c;
    scanf("%d %d",&a,&b);
    c = pow(2,b);
    a -= c;
    printf("%d",a);
    return 0;
}