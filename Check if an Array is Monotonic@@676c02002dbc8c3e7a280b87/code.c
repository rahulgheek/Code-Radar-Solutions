#include <stdio.h>

int main() {
    int a,b=1;
    scanf("%d",&a);
    int arr[a];

    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }

    for(int j = 0;j<a-1;j++){
        if(arr[j]<arr[j+1]){
            b = 1;
        }
        else{
            b=0;
        }
    }

    if(b){
        printf("YES");
    }
    else{printf("NO");}
    return 0;
}