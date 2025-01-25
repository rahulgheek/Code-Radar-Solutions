#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c,d=1;
    scanf("%d %d",&a,&b);
    for(int i = 0;i<b;i++){
        d = d*2;
    }
    c = a^d;
    printf("%d",d);
    return 0;
}