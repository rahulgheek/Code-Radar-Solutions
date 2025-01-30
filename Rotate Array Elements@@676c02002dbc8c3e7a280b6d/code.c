#include <stdio.h>

int main() {
    int a,k,temp,temp2;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);

    temp = arr[a-1];
    for(int l = 0;l<a-2;l++){
        temp2=arr[l+1];
        arr[l+1] = arr[l];
        arr[l+2] = temp2;
    }
    arr[0] = temp;

    for(int m=0;m<a;m++){
        printf("%d\n",arr[m]);
    }
    return 0;
}