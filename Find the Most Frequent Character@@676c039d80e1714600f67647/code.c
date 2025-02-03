#include <stdio.h>

int main() {
    char str[100],present='z';
    scanf("%[^\n]%*c",&str);

    int j,i = 0,count,large = 0;
    while(str[i]!='\0'){
        j=0;
        count = 0;
        while(str[j]!='\0'){
            if(str[i]==str[j]){
                count++;
            }
            j++;
        }
        }
        if(count>large && present > str[i]){
            large = count;
            present = str[i];
        }
        i++;
    }
    if(large==1){
        present = str[j-1];
    }

    printf("%c",present);
    return 0;
}