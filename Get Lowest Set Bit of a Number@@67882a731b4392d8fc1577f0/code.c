#include <stdio.h>

int main() {
    int a,count=0,b=1;
    scanf("%d",&a);
    for(int i = 0;i<a;i++){
        b=b<<1;
        count++;
        if(a&b==1){
            printf("%d",count);
            break;
        }
        
    }
    return 0;
}