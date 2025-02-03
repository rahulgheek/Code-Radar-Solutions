#include <stdio.h>

int main() {
    char str[100];
    scanf("%[^/n]%*c",&str);

    int i = 0,count=0,j=0;
    while(str[i]!='\0'){
        while(str[j]!='\0'){
            if(str[i] == str[j]){
                count++;
            }
            j++;
        }
        if(count == 1){
            printf("%c",str[i]);
            break;
        }
        i++;
    }
    return 0;
}