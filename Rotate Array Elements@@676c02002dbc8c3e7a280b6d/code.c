#include <stdio.h>

int main() {
    int a,k,temp,temp2;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);

    for(int j = 0;j<k;j++){
        temp = arr[a-1];
        for(int o = a-2;o>0;o--){
            arr[o] = arr[o];
        }
        arr[0] = temp;
    }

    for(int m=0;m<a;m++){
        printf("%d\n",arr[m]);
    }
    return 0;
}