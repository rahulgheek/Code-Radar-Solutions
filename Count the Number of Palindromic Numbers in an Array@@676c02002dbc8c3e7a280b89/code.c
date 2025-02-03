#include <stdio.h>

int ispalidrome(int num){
    int sum = 0;
    while(num!=0){
        sum += num%10;
        num /= 10;
    }
    return sum;
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