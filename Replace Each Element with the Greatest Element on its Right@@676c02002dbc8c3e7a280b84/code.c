#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];

    for(int i = 0;i<a;i++){
        scanf("%d ",&arr[i]);
    }

    for(int j = a-2;j>=0;j--){
        if(arr[j+1]>arr[j]){
            arr[j] = arr[j+1];
        }
    }
    arr[a-1] = -1;

    for(int m = 0;m<a;m++){
        printf("%d ",arr[m]);
    }
    return 0;
}