#include <stdio.h>

int main() {
    int a,last=-1;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);

    for(int j = 0;j<a;j++){
        if(arr[j]==k){
            last = j;
            break;
        }
    }
    printf("%d",last);
    return 0;
}