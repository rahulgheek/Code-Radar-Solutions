#include <stdio.h>

int sumOfdigits(int num){
    int sum = 0;
    while(num!=0){
        sum += num%10;
        n /= 10;
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
        printf("%d",sumOfdigits(arr[j]));
        
    }
    return 0;
}