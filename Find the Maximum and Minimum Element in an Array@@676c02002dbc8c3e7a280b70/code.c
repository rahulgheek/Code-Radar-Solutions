#include <stdio.h>

int main() {
    int a,max=-100,min=10000;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int j = 0;j<a;j++){
        if(max<arr[j]){
            max = arr[j];
        }
        if(min>arr[j]){
            min = arr[j];
        }
    }

    printf("%d %d",min,max);

    return 0;
}