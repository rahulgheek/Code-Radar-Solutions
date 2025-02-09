void bubbleSort(int arr[],n){
    int temp;
    for(int i = 0;i<n;i++){
        if(arr[j]>arr[i]){
            for(int j = i+1;j<n;j++){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArray(int arr[],n){
    for(int m = 0;m<n;m++){
        printf("%d ",arr[m]);
    }
}