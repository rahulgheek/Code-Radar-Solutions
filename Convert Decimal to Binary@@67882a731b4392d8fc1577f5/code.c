#include <stdio.h>

int main() {
    int a,i=0;
    scanf("%d",&a);
    int arr[50];

    while(a>0){
        if(a%2==0){
            arr[i] = 0;
        }
        else{
            arr[i] = 1;
        }
        a = a/2;
        i++;
    }
    if(a==0){
        printf("%d",0);
    }
    else{
    for(int j = i-1;j>=0;j--){
        printf("%d",arr[j]);
    }}
    return 0;
}