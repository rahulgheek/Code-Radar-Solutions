#include <stdio.h>

int main() {
    int a,sum=0;
    scanf("%d",&a);
    int arr[a];

    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }

    for(int j = 0;j<a;j++){
        sum += arr[j];
        printf("%d ",sum);
    }
    return 0;
}