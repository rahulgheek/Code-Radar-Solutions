#include <stdio.h>

int main() {
    int a,b,temp;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0;i<a;i++){
        scanf("%d ",&arr[i]);
    }
    scanf("%d",&b);

    for(int j = 0;j<b;j++){
        temp = arr[a-1];
        for(int k = a-2;k>=0;k--){
            arr[k+1] = arr[k];
        }
        arr[0] = temp;
    }

    for(int m = 0;m<a;m++){
        printf("%d ",arr[m]);
    }
    return 0;
}