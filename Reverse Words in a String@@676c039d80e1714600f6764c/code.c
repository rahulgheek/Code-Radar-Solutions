#include <stdio.h>

void reverse(int n,int j,char Str[100]){
    for(int i = j+n;i>j;i--){
        printf("%c",Str[i]);
    }
}
int main() {
    char str[100];
    scanf("%[^\n]%*c",&str);

    int x = 0,i = 0,j = 0,k;
    while(str[i]!='\0'){
        if(str[i]==' '){
            j = i - x;
            reverse(x,j,str);
            x = 0;
        }
        x++;
        i++;
    }
    return 0;
}