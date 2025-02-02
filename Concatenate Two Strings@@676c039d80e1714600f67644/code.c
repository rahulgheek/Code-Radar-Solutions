#include <stdio.h>

int main() {
    char str1[100],str2[100];
    scanf("%[^\n]%*c",&str1);
    scanf(" ");
    scanf("%[^\n]%*c",&str2);

    printf("%s%s",str1,str2);
    return 0;
}