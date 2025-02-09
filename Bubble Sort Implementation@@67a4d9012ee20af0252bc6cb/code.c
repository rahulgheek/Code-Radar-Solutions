void bubbleSort(int arr[],int n){
    int temp;
    for(int i = 0;i<n-1;i++){
            for(int j = i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArray(int arr[],int n){
    for(int m = 0;m<n;m++){
        printf("%d ",arr[m]);
    }
}