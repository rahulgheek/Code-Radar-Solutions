#include <stdio.h>
#include <math.h>


int main() {
    int a,b,c;
    scanf("%d %d",&a,&b);
    c = 1<<b;
    if(a&c == 1){
        printf("%d",a-c);
    }
    else{
        printf("%d",a+c);
    }
    return 0;
}