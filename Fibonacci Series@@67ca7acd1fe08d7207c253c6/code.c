#include <stdio.h>


void fibonacciSeries(int n){
    int a = 0, b = 1;

    if(n == 1)
    printf("%d",a);
    else if(n == 2){
    printf("%d",b);
    }

    else{
    for(int i = 0; i<n;i++){
            int temp = a;
            a = b;
            b = b + temp;
            printf("%d ",a);
        }
        
    }
}