#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c=0;
    scanf("%d %d",&a,&b);
    for(int i = 0;i<=b;i++){
        c += i*2;
    }
    a -= c;
    printf("%d",a);
    return 0;
}