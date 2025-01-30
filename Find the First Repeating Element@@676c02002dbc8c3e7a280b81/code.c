#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];

    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }

    for(int j = 0;j<a-1;j++){
        for(int k = j+1;j<a;k++){
            if(arr[j]==arr[k]){
                printf("%d",arr[k]);
            }
        }
    }
    return 0;
}