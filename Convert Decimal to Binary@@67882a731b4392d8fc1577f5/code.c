#include <stdio.h>
#include <stdlib.h>

int main() {
    // int a,i=0,c;
    // scanf("%d",&a);
    // c=a;
    // int arr[50];

    // while(a>0){
    //     if(a%2==0){
    //         arr[i] = 0;
    //     }
    //     else{
    //         arr[i] = 1;
    //     }
    //     a = a/2;
    //     i++;
    // }
    // if(c==0){
    //     printf("%d",0);
    // }
    // else{
    // for(int j = i-1;j>=0;j--){
    //     printf("%d",arr[j]);
    // }}
    int n;
    scanf("%d",&n);
    char buffer[33];
    itoa(n,buffer,2);
    printf("%s",buffer);

    return 0;
}