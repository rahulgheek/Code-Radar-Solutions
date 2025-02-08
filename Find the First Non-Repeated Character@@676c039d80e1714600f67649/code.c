#include <stdio.h>

int main() {
    char str[100],a='-';
    scanf("%[^/n]%*c",&str);

    int i = 0;
    while(str[i]!='\0'){
        int j = 0;
        while(str[j]!='\0'){
            if(str[i]!=str[j] && i!=j){
                a = str[j];
                break;
            }
            j++;
        }
        i++;
    }

    printf("%c",a);
    return 0;
}