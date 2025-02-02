#include <stdio.h>

int main() {
    char str[100];
    scanf("%s",&str);

    int i = 0,count=0;
    while(str[i]!='\0'){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
        i++;
    }

    printf("%d",count);
    return 0;
}