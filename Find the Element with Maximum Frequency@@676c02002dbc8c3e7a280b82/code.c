#include <stdio.h>

int main() {
    int a,large=0,output=0;
    scanf("%d",&a);
    int arr[a];

    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }

    for(int j = 0;j<a;j++){
        int count = 0,present;
        for(int k = 0;k<a;k++){
            if(arr[j]==arr[k]){
                count++;
                present = arr[j];
            }
        }
        if(large<count){
            present = output;
            large = count;
        }
    }

    printf("%d",output);

    return 0;
}