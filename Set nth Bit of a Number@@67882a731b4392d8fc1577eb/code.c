#include <stdio.h>

int main() {
    int a,b,c=1;
    scanf("%d %d",&a,&b);
    for(int i = 0;i<b;i++){
        c = c*2;
    }
    printf("%d",c);
    return 0;
}