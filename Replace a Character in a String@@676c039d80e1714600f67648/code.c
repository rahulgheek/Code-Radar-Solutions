#include <stdio.h>

int main() {
    char str[100],a,b;
    scanf("%[^\n]%*c",&str);
    scanf("\n");
    scanf("%c %c",&a,&b);

    int i = 0;
    while(str[i]!='\0'){
        if(str[i]==a){
            str[i]=b;
        }
        i++;
    }
    printf("%s",str);
    return 0;
}