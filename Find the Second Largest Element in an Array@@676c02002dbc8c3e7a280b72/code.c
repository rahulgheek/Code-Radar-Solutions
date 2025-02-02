#include <stdio.h>

int main() {
    int a,large=-1000000000,secondlarge=-2000000000;
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

    for(int k = 0;k<a;k++){
        if(arr[k]>secondlarge && arr[k]!=large){
            secondlarge = arr[k];
        }
    }
    printf("%d",secondlarge);
    return 0;
}