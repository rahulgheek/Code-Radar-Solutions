#include <stdio.h>

int main() {
    int a;
    char b;
    for(int i = 0;i<a;i++){
        b = 'A';
        for(int j = a;j>i;j--){
            printf("%c",b);
            b++;
        }
        printf("\n");
    }
    return 0;
}