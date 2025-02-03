#include <stdio.h>

int main() {
    int a,count = 0;
    scanf("%d",&a);
    int arr[a];
    int arr1[100];

    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }

    for(int j = 0;j<a-1;j++){
        for(int k = j+1;k<a;k++){
            if(arr[j]==arr[k] && j!=k){
                arr1[count] = arr[k];
                count++;
            }
        }
    }
    if(arr1[0] > 100000 || arr1[0]<=-100000){
        arr1[0] = -1;
    }
    printf("%d",arr1[0]);
    return 0;
}