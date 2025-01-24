#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if(a>=1 && a<=12){
    if(a%2!=0){
        printf("%d",31);
    }
    else if(a==2){
        printf("%d",28);
    }
    else if(a%2==0){
        printf("%d",30);
    }}
    else{
        printf("Invalid month");
    }
    return 0;
}