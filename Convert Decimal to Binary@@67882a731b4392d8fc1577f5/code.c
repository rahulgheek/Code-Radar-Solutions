#include <stdio.h>

int main() {
    int a,i=0;
    scanf("%d",&a);
    int arr[100];

    while(a>0){
        if(a%2==0){
            arr[i] = 0;
        }
        else{
            arr[i] = 1;
        }
        a = a/2;
        b++;
    }

    printf("%d",arr[0]);
    return 0;
}