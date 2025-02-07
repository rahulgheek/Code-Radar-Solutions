#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];

    for(int i = 0;i<a;i++){
        scanf("%d ",&arr[i]);
    }

    for(int j = n-1;j>0;j--){
        if(arr[j]>arr[j-1]){
            arr[j-1] = arr[j];
        }
    }

    for(int m = 0;m<a;m++){
        printf("%d ",arr[m]);
    }
    return 0;
}