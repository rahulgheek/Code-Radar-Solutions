#include <stdio.h>
#include <string.h>

void reverse(int n,int j,char Str[100]){
    for(int i = j+n;i>=j+1;i--){
        printf("%c",Str[i]);
    }
    printf(" ");
}
int main() {
    char str[100];
    scanf("%[^\n]%*c",&str);
    int z = strlen(str);

    int x = 0,i = 0,j = 0,k;
    while(i<=z){
        if(str[i]==' ' || i == z){
            j = i - x-1;
            reverse(x,j,str);
            x = 1;
            if(i==z){

            }
            else{
                printf("");
            }
        }
        x++;
        i++;
    }
    return 0;
}