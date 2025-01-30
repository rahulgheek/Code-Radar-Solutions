#include <stdio.h>

int main() {
    int a,k,temp;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);

    for(j = 0;j<k;j++){
        temp = arr[a-1];
        for(int l = 0;l<a;l++){
            arr[l+1] = arr[l];
        }
        arr[0] = temp;
    }

    for(int m=0;m<a;m++){
        printf("%d\n",arr[m]);
    }
    return 0;
}