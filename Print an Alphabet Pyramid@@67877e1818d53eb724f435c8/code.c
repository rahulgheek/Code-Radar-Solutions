#include <stdio.h>

int main() {
    int a;
    char b;
    scanf("%d",&a);
    for(int i = 0;i<a;i++){
        b = 'A';
        for(int j = 0;j<=i;j++){
            printf("%c ",b);
            b++;
        }
        printf("\n");
    }
    return 0;
}