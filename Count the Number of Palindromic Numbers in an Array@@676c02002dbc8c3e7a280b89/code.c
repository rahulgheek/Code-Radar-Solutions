#include <stdio.h>

char ispalidrome(int num){
    char str[10],str2[100];
    int i = 0;
    while(num!=0){
        str[i] = num%10;
        num /= 10;
        i++;
    }
    sprintf(str2,"%d",num);
    return str2[3];
}

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];

    for(int i = 0;i<a;i++){
        scanf("%d ",&arr[i]);
    }

    for(int j = 0;j<a;j++){
        printf("%d ",ispalidrome(arr[j]));
    }
    return 0;
}