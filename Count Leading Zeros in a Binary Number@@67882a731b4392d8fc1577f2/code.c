#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    printf("%d",__builtin_clz(n));
    return 0;
}