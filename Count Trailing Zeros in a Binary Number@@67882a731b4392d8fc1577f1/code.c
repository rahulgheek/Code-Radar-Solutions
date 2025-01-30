#include <stdio.h>

int main() {
    int a,count=0;
    scanf("%d",&a);
    
    while(a!=0){
        a = a>>1;
        count++;
        while(a!=0){
            break;
        }
    }
    printf("%d",count-1);
    return 0;
}