#include <stdio.h>

int main() {
    int a,count=0;
    scanf("%d",&a);
    while((a>>count)==0){
        count++;
    }
    printf("%d",count);
    return 0;
}