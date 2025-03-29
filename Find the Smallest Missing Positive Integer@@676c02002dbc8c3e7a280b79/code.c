#include <stdio.h>

void bubblesort(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    bubblesort(arr,n);
    int res = 0;
    for(int j = 0;j<n;j++){
        if(arr[j] < 0){
            continue;
        }
        
        if(arr[j] == res){
            res++;
        }
        else{
            printf("%d",res);
            break;
        }
    }
    return 0;
}