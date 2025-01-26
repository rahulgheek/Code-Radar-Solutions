#include <stdio.h>

int main() {
    int n,odd=0,even=0;
    scanf("%d",&n);
    int arr[n];

    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int j = 0;j<a;j++){
        if(arr[j]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }

    printf("%d %d",even,odd);
    return 0;
}