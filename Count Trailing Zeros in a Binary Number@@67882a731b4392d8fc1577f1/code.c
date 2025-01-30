#include <stdio.h>

int main() {
    int a,count=0;
    scanf("%d",&a);
    
    while(a!=0){
        while(a!=0){
            break;
        }
        a = a>>1;
        count++;
    }
    printf("%d",count);
    return 0;
}