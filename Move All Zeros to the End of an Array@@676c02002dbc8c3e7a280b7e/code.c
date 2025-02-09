#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int j = 0;j<n;j++){
        if(arr[j] == 0){
            int temp = arr[j];
            for(int k = 0;k<n;k++){
                arr[k] = arr[k+1];
            }
            arr[n-1] = temp;
        }
    }

    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}