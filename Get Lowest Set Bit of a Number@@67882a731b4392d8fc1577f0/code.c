#include <stdio.h>

int main() {
    int a,count=0,b=1;
    scanf("%d",&a);
    for(int i = 0;i<a;i++){
        if(a&1==1){
            printf("%d",count);
            break;
        }
        b = b<<1;
    }
    printf("%d",count);
    return 0;
}