#include <stdio.h>



int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int j = 0;j<n;j++){
        int sum = 0;
        while(arr[j] != 0){
            sum += arr[j] %10;
            arr[j] /=10;
        }
        printf("%d ",sum);
    }
    return 0;
}