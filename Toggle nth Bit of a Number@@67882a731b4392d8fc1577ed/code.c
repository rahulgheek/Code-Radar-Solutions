#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c,d=1;
    scanf("%d %d",&a,&b);
    printf("%d",a^(1<<b));
    return 0;
}