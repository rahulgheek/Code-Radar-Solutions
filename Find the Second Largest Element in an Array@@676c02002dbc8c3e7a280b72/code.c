#include <stdio.h>

int main() {
    int a,large=0,secondlarge;
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

    printf("%d",large);
    return 0;
}