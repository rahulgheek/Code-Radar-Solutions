#include <stdio.h>
#include <stdlib.h>

int isPrime(int num){
    if(num<=1){
        return 0;
    }
    for(int i = 2;i<num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int n,s,count=0;
    
    return 0;
}