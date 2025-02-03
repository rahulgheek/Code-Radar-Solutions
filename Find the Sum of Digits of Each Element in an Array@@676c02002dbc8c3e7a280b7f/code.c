#include <stdio.h>

int sumofnum(int num){
    int sum = 0;
    while(sum!=0){
        sum += num%10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int j = 0;j<n;j++){
        printf("%d ",sumofnum(arr[j]));
    }
    return 0;
}