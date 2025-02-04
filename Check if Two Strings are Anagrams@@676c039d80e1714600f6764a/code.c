#include <stdio.h>
#include <string.h>

int main() {
    char str[100],str2[100];

    scanf("%[^\n]%*c %[^\n]%*c",&str,&str2);
    int x = strlen(str);
    
    int i = 0,y,sum=0;
    char STR[2];
    char STR2[2];
    while(i<x){
        STR[0] = str[i];
        STR2[0] = str2[i];
        y = strncmp(STR,STR2,1);
        sum+=y;
        i++;
    }

    if(sum==0) printf("Yes");
    else printf("No");
    return 0;
}