#include <stdio.h>

int main() {
    int n,count,c;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int j = 0;j<(n);j++){
        c = 0;
        for(int k = j+1;k<n;k++){
            if(arr[j] < arr[k]){
                c++;
                break;
            }
        }
        if(c == 0){
            printf("%d ",arr[j]);
        }
    }

    return 0;
}