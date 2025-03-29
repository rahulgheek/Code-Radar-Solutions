#include <stdio.h>
int mountainPeak(int N){
    int arr[30],n=0,i=0;

    while(N!=0){
        arr[i]=N%10;
        N /= 10;
        i++;
    }

    return arr[i/2];

    return 0;
}