#include <stdio.h>

int isPrime(int n){
    if(n<=1){
        return 0;
    }
    for(int i = 2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int n,s,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int j == 0;j<n;j++){
        s = isPrime(arr[j]);
        if(s){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}