#include <stdio.h>

int main() {
    char str[100];
    scanf("%[^\n]%*c",&str);
    int c = 0,pal = 1;
    while(str[c]!='\0'){
        c++;
    }

    for(int i = 0;i<c;i++){
        if(str[i]!=str[c-i-1]){
            pal = 0;
        }
    }

    if(pal){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}