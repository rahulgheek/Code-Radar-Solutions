#include <stdio.h>

int main() {
    int n,count,c;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int j = 0;j<(n-1);j++){
        count = 0;
        c = 0;
        for(int k = 1;k<n;k++){
            if(arr[j] > arr[k]){
                c++;
            }
            count++;
        }
        if(c == count){
            printf("%d ",arr[j]);
        }
    }
    printf("%d",arr[n-1]);

    return 0;
}