#include <stdio.h>

int main() {
    int a,count=0;
    scanf("%d",&a);
    for(int i = 0;i<a;i++){
        if(a&1==1){
            printf("%d",count);
            break;
        }
        a = a>>1;
        count++;
    }
    return 0;
}