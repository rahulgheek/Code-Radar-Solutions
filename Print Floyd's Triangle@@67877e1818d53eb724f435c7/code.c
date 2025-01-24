#include <stdio.h>

int main() {
    int a,b=1;
    scanf("%d",&a);
    for(int i = 0;i<a;i++){
        for(int j = 0;j<=i;j++){
            printf("%d ",b);
            b++;
        }
        printf("\n");
    }
    return 0;
}