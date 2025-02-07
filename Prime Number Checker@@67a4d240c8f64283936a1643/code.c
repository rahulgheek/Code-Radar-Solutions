#include <stdio.h>

int isprime(int n){
    int flag = 1;
    if(n <= 1){
        return 0;
    }
    for(int i = 2;i<n;i++){
        if(n%i!=0){
            flag = 1;
            break;
        }
    }
    return flag;
}

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int j = 0;j<a;j++){
        scanf("%d",&arr[j]);
    }

    return 0;
}