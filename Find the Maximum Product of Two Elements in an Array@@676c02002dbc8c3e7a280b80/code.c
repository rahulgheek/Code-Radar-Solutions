#include <stdio.h>

int main() {
    int a,max=0;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }

    for(int j = 0;j<(a-1);j++){
        for(int k = j+1;k<a;k++){
            if(max<arr[i]*arr[j]){
                max = arr[i]*arr[j];
            }
        }
    }

    printf("%d",max);
    return 0;
}