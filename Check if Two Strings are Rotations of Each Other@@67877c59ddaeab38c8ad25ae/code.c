#include <stdio.h>

int main() {
    char str[50],str2[50];
    scanf("%[^\n]%*c",&str);

    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    
    char temp = str[i-1];
    for(int j = i-1;j>0;j--){
        str[j] = str[j-1];
    }

    printf("%s",str);
    return 0;
}