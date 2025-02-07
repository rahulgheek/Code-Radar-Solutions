#include <stdio.h>

int isprime(int n){
    int flag = 1;
    if(n <= 1){
        return 0;
    }
    for(int i = 2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int a;
    int arr[a];
    scanf("%d",&a);

    for(int j = 0;j<a;j++){
        scanf("%d",&arr[j]);
    }

    for(int k = 0;k<a;k++){
        printf("%d\n",isprime(arr[k]));
    }
    return 0;
}