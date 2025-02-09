#include <stdio.h>

int main() {
    int n,temp;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int j = 0;j<n-1;j++){
        if(arr[j] == 0){
            temp = arr[j];
            for(int k = j;k<n;k++){
                arr[k] = arr[k];
            }
            arr[n-1] = 0;
        }
    }

    for(int i = 0;i<n;i++){
        printf("%d ",&arr[i]);
    }

    return 0;
}