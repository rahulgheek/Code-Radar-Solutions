#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i = 1;i<=a;i++){
        for(int j = 1;j<=(i*i-1);j+=2){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}