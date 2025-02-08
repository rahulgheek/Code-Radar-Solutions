#include <stdio.h>

int main() {
    char str[100],pre[100];
    scanf("%[^\n]%*c",&str);

    int i = 0,x = 0,large = 0,j = 0;
    while(str[i] != '\0'){
        if(str[i] == ' '){
            large = x;
            j = i-x;
            x = 0;
        }else{
        x++;}
        i++;
    }

    for(int k = 0;k<large;k++){
        printf("%c",str[j+k]);
    }
    return 0;
}