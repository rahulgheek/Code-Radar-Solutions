#include <stdio.h>

int main() {
    char str[100];
    scanf("%[^\n]%*c",&str);
    int i = 0;
    while(str[i] != '\0'){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='O'||str[i]=='I'||str[i]=='U'){
            printf("%c",str[i]);
        }
        else if((str[i]>='a' && str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
            
        }
        else{
            printf("%c",str[i]);
        }
        i++;
    }
    return 0;
}