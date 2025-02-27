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

int main() {
    int a,largest = -1,n = 0;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }

    bubbleSort(arr,a);

    for(int i = 0;i<a;i++){
        int count = 0;
        if(arr[i] == arr[i+1]){
            count++;
        }

        
        if(arr[i] != arr[i+1]){
            printf("%d %d",count,arr[i]);
        }
    }

    

    return 0;
}