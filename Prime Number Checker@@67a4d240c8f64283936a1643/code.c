#include <stdio.h>

int isprime(int n){
    int flag = 0;
    if(n <= 1){
        return flag;
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
    
}