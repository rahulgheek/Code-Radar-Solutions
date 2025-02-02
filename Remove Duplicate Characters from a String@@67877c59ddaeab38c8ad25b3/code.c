#include <stdio.h>

int main() {
    char str[100];
    scanf("%[^\n]%*c",&str);

    for(int i = 0;str[i] != '\0';i++){
        for(int j = i+1;str[j]!='\0';j++){
            if(str[i] == str[j]){
                str[j] = ' ';
            }
        }
    }
    
    int k = 0;
    while(str[k]!='\0'){
        if(str[k]!=' '){
            printf("%c",str[k]);
        }
        k++;
    }
    return 0;
}