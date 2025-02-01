#include <stdio.h>

int main() {
    int a,count=0;
    scanf("%d",&a);
    while(a!=0){
        a=a>>1;
        count++;
    }
    if(a==0){
        printf("%d",0);
    }
    else{
    printf("%d",32-count);
    }
    return 0;
}