#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int j = 0;j<a;j++){
        printf("%d",arr[j]);
    }
    return 0;
}