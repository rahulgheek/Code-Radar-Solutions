#include <stdio.h>

int main() {
    char str[200];
    char str2[30] = "abcdefghijklmnopqrstuvwxyz";
    scanf("%[^\n]%*c",&str);

    int i = 0,temp,flag = 0;
    while(str[i]!=0){
        int j = 0;
        while(str2[j]!=0){
            if(str[i]==str2[j]){
                flag = 1;
                break;
            }
            else{
                flag = 0;
            }
            j++;
        }
        if(flag == 0){
            break;
        }
        i++;
    }

    if(flag){
        printf("Yes");
    }
    else{
        printf("No");
    }

    
    return 0;
}