#include <stdio.h>

int main() {
    int a,largest = -1,count=0;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }

    for(int j = 0;j<a;j++){
        int c = 0;
        for(int k = 0;k<a;k++){
            if(arr[j]==arr[k]){
                c++;
            }
            count++;
        }
        if(c == count){
            largest = arr[j];
        }
        
    }

    printf("%d",largest);

    return 0;
}