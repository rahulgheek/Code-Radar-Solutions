#include <stdio.h>

int main() {
    int a,large=0,secondlarge=0;
    scanf("%d",&a);
    int arr[a];

    for(int i = 0;i<a;i++){
        scanf("%d ",&arr[i]);
    }

    for(int j = 0;j<a;j++){
        if(arr[j]>large){
            large = arr[j];
        }
    }
    int c = 0;

    for(int k = 0;k<a;k++){
        if(arr[k]==large){
            c++
        }
        if(arr[k]>secondlarge && arr[k]!=large){
            secondlarge = arr[k];
        }
    }
    if(c==1){
        printf("%d",secondlarge);
    }
    else{
    printf("%d",large);}
    return 0;
}