#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];

    for(int i = 0;i<a;i++){
        scanf("%d ",&arr[i]);
    }
    int large = arr[0],secondlarge=arr[1];

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