#include <stdio.h>
#include <string.h>

int main() {
    char str[100],str2[100];

    scanf("%[^\n]%*c %[^\n]%*c",&str,&str2);
    int x = strlen(str);
    
    int i = 0,y,sum=0;
    char STR[2];
    while(i<x){
        STR[0] = str[i];
        y = strncmp(STR,"i",1);
        i++;
    }

    printf("%d",y);
    return 0;
}