#include <stdio.h>

int main() {
    char str[200];
    scanf("%[^\n]%*c",&str);

    int i = 0,j,y = 0;
    char temp,small;

    while(str[i]!=0){
        j = 0;
        small = 'z';
        while(str[j]!=0){
            if(str[j]<small){
                small = str[j];
                y = j;
            }
            j++;
        }
        temp = str[0];
        str[0] = small;
        str[j] = temp;

        i++;
    }

    printf("%s",str);
    return 0;
}