// Your code here...
#include <stdio.h>

void bubbleSort(int arr[],int n){
    int temp;
    for(int i = 0;i<n;i++){
            for(int j = i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){

    int a;
    scanf("%d",&a);
    int arr[a];

    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }

    bubbleSort(arr,a);

    printf("%d",arr[0]);
    

    return 0;
}