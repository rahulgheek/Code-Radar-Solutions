#include <stdio.h>

int main() {
    char str[100];
    int a = 0;
    scanf("%[^\n]%*c",&str);

    int i = 0;
    while(str[i]!='\0'){
        if(str[i]!=0 || str[i]!=1){
            a = 1;
            break;
        }
        i++;
    }
    if(a){
        printf("No");
    }else{printf("Yes");}
    return 0;
}