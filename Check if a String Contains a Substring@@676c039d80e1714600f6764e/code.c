#include <stdio.h>
#include <string.h>

int main() {
    char str1[100],str2[100];
    scanf("%[^\n]%*c",&str1);
    scanf("\n");
    scanf("%[^\n]%*c",&str2);

    int x = strlen(str2);

    int i = 0,j = 0,flag = 0;
    while(str1[i] != '\0'){
        if(str1[i] == str2[j]){
            j++;
            if(j==x-1){
                flag = 1;
                break;
            }
        }
    }
    return 0;
}