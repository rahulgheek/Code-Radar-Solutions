#include <stdio.h>

void ispalidrome(int num){
    char str[10],str2[100];
    int i = 0;
    while(num!=0){
        str[i] = num%10;
        num /= 10;
        i++;
    }
    sprintf(str2,"%d",num);
    printf("%s",str2);
}

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];

    for(int i = 0;i<a;i++){
        scanf("%d ",&arr[i]);
    }

    for(int j = 0;j<a;j++){
        ispalidrome(arr[j]);
        printf("\n");
    }
    return 0;
}