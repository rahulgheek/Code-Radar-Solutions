#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];

    for(int i = 0;i<a;i++){
        scanf("%d ",&arr[i]);
    }

    for(int j = a-1;j>0;j--){
        int temp = arr[j-1];
        arr[j-1] = arr[j];
        if(arr[j]>arr[j-1]){
            temp = arr[j-1];
        }
    }
    arr

    for(int m = 0;m<a;m++){
        printf("%d ",arr[m]);
    }
    return 0;
}