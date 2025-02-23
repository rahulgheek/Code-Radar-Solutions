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

    int b,c,min = 1000;

    for(int k = 0;k<a-1;k++){
        for(int l = k+1;l<a;l++){
            if(arr[l]-arr[k] < min){
                min = arr[l] - arr[k];
                b = arr[l];
                c = arr[k];
            }
        }
    }
    if(a == 1){
        printf("%d",-1);
    }
    else
    printf("%d %d",c,b);
    

    return 0;
}