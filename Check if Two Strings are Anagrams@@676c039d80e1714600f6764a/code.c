#include <stdio.h>
#include <string.h>

int main() {
    char str[100],str2[100];

    scanf("%[^\n]%*c   %[^\n]%*c",&str,&str2);
    int x = strncmp(str,str2,strlen(str)-1);
    if(x==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}