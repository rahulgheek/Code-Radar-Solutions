#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("Profit");
    }
    else if(a<b){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}