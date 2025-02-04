#include <stdio.h>
#include <string.h>

int main() {
    char str[100],str2[100];

    scanf("%[^\n]%*c %[^\n]%*c",&str,&str2);
    int x = strlen(str);
    
    int i = 0,y,sum=0;
    while(i<x){
        y = strncmp(str[i],str2[i],1);
    }
    return 0;
}