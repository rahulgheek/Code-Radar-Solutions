#include <stdio.h>
#include <string.h>

void reverse(int n,int j,char Str[100]){
    for(int i = j+n-1;i>=j;i--){
        printf("%c",Str[i]);
    }
}
int main() {
    char str[100];
    scanf("%[^\n]%*c",&str);
    int z = strlen(str);

    int x = 0,i = 0,j = 0,k;
    while(i<=z){
        if(str[i]==' ' || str[i] == '\0'){
            j = i - x;
            reverse(x,j,str);
            x = 0;
        }
        x++;
        i++;
    }
    return 0;
}