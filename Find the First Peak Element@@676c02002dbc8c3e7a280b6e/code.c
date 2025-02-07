#include <stdio.h>

int main() {
    int a,temp=-1;
    scanf("%d",&a);
    int arr[a+1];
    for(int i = 0;i<=a;i++){
        scanf("%d",&arr[i]);
    }

    for(int j = 1;j<a-1;j++){
        if(arr[j]>arr[j-1] && arr[j]>arr[j+1] && arr[j]!=arr[j+1]){
            temp = arr[j];
            break;
        }
    }
    if(temp == -1){
        temp = arr[a-1];
    }

    printf("%d",temp);
    return 0;
}