#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if(a%2!=0){
        printf("%d",31);
    }
    else if(a==2){
        printf("%d",28);
    }
    else{
        printf("%d",30);
    }
    return 0;
}