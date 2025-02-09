#include <stdio.h>
#include <stdlib.h>

int ispalidrome(int num){
    char str[10],str2[10];
    int i = 0;

    while(num!=0){
        str[i] = num%10;
        num /= 10;
        i++;
    }
    
    for(int j = 0;j<i;j++){
        if(str[j]!=str[i-j-1]){
            return 0;
        }
    }
    return 1;
    
}

int main() {
    int a,count = 0;
    scanf("%d",&a);
    int arr[a];

    for(int i = 0;i<a;i++){
        scanf("%d ",&arr[i]);
    }

    for(int j = 0;j<a;j++){
        printf("%d",ispalidrome(arr[j]));
    }

    return 0;
}