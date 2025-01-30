#include <stdio.h>

int main() {
    int a,count=0;
    scanf("%d",&a);
    while(a!=0){
        a = a>>1;
        count++;
        if(a==1){
            break;
        }
    }
    printf("%d",32-count);
    return 0;
}