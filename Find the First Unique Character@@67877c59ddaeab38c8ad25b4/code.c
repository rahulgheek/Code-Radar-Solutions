#include <stdio.h>

int main() {
    char str[100],a;
    scanf("%[^/n]%*c",&str);

    int i = 0,count,j;
    while(str[i]!='\0'){
        count = 0;
        j = 0;
        while(str[j]!='\0'){
            if(str[i] == str[j]){
                count++;
            }
            j++;
        }
        if(count == 1){
            a = str[i];
            break;
        }
        i++;
    }

    printf("%c",a);
    return 0;
}