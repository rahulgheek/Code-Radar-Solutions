#include <stdio.h>
int mountainPeak(int N){
    int arr[30],n=0,i=0;

    while(N!=0){
        arr[i]=N%10;
        N /= 10;
        i++;
    }

    for(int j = 0;j<i;j++){
        if(arr[i/2] <= arr[j] && i/2 != j){
            return -1;
        }
    }

    return arr[i/2];
}