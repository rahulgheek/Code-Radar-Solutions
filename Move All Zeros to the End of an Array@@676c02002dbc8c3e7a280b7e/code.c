#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int j = 0;
    while(j<n){
        if(arr[j+1] == 0 || arr[j+1] > 10000 || arr[j+1]< -10000){
            j++;
        }
        else if(arr[j] == 0){
            int temp = arr[j];
            for(int k = 0;k<n;k++){
                arr[k] = arr[k+1];
            }
            arr[n-1] = temp;
        }
        else{
            j++;
        }
    }

    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}