#include <stdio.h>

int main() {
    int a,b=1;
    scanf("%d",&a);
    int arr[a];

    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }

    for(int j = 0;j<a-2;j++){
        if((arr[j]<=arr[j+1] && arr[j+1]<=arr[j+2]) || (arr[j]>=arr[j+1] && arr[j+1]>=arr[j+2])){
            b = 1;
        }
        else{
            b=0;
            break;
        }
    }

    if(b){
        printf("YES");
    }
    else{printf("NO");}
    return 0;
}