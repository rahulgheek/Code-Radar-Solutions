#include <stdio.h>

int main() {
    int a,count=0,b;
    scanf("%d",&a);
    b = a;
    for(int i = 0;i<a;i++){
        b = b>>1;
        count++;
        if(a&b==-1){
            break;
        }
    }
    printf("%d",count);
    return 0;
}

