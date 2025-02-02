#include <stdio.h>

int main() {
    char str[100];
    char a[4] = "Yes";
    scanf("%[^\n]%*c",&str);

    int i = 0;
    while(str[i]!='\0'){
        if(str[i]!='0' || str[i]!='1'){
            a = "No";
            break;
        }
        i++;
    }
    printf("%s",a);
    return 0;
}