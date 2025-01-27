#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);

    for(int i=0;i<a;i++){
        for(int j = (a-1);j>i;j--){
            printf(" ");
        }

        int b = 1;
        while(b<=i){
            printf("%d",b);
            b++;
        }
        while(b>=1){
            printf("%d",b);
            b--;
        }
        printf("\n");
    }
    return 0;
}