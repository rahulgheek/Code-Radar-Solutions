#include <stdio.h>

int main() {
    int n,result = 1;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j = 0;j<n;j++){
        if(arr[j]!=arr[n-1-j]){
            result = 0;
            break;
        }
    }

    if(result==0){
        printf("NO");
    }
    else{
        printf("YES");
    }
    return 0;
}
