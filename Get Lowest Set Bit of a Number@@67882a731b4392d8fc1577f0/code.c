#include <stdio.h>

int main() {
    int a,count=0,b;
    scanf("%d",&a);
    b = a;
    while(b!=0){
        if(b&1==1){
            break;
        }
        b = b>>1;
        count++;
        
    }
    printf("%d",count);
    return 0;
}

