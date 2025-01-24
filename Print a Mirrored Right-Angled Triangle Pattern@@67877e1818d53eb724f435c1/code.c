#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i = 0;i<a;i++){
        for(int j = 0;j<a;j++){
            if(j>=(i+1)){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}