#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);

    int arr[a];
    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }

    if(a%2==0){
        printf("%d",(arr[a/2]+arr[(a/2)-1])/2);
    }
    else{
        printf("%d",arr[a/2]);
    }
    return 0;
}