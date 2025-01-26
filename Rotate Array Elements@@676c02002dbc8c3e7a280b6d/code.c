#include <stdio.h>

int main() {
    int a,k,temp;
    scanf("%d",&a);
    int marks[a];
    for(int i = 0;i<a;i++){
        scanf("%d",&marks[i]);
    }
    scanf("%d",&k);

    for(int j = 0;j<k;j++){
        temp = marks[a-1];
        for(int l = (a-1);l<0;l--){
            marks[l] = marks[l+1];
        }
    }

    for(int m=0;m<a;m++){
        printf("%d\n",marks[m]);
    }
    return 0;
}