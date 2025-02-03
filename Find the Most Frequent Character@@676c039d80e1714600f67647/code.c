#include <stdio.h>

int main() {
    char str[100],present;
    scanf("%[^\n]%*c",&str);

    int j,i = 0,count,large = 0;
    while(str[i]!='\0'){
        j=0;
        count = 0;
        while(str[j]!='\0'){
            if(str[i]==' '){
                continue;
            }
            if(str[i]==str[j]){
                count++;
            }
            j++;
        }
        if(count>large){
            large = count;
            present = str[i];
        }
        i++;
    }

    printf("%c",present);
    return 0;
}