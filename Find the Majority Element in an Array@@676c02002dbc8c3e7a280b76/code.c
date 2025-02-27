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
    int arr1[a],arr2[a];

    bubbleSort(arr,a);

    for(int i = 0;i<a;i++){
        int count = 0;
        
        for(int k = 0;k<a;k++){
            if(arr[i] == arr[k]){
                count++;
            }
        }

        
        if(arr[i] != arr[i+1]){
            arr1[i] = count;
            arr2[i] = arr[j];
        }
    }

    

    return 0;
}