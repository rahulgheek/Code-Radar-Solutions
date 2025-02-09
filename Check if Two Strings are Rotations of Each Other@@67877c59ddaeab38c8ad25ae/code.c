#include <stdio.h>

int main() {
    char str[50],str3[50];
    scanf("%[^\n]%*c",&str);
    scanf("\n");
    scanf("%[^\n]%*c",&str3);


    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    int flag = 0;
    for(int k = 0;k<i;k++){
        char temp = str[i-1];
        for(int j = i-1;j>0;j--){
            str[j] = str[j-1];
        }
        str[0] = temp;
        printf("%s %s\n",str,str3);
    }
    

    return 0;
}