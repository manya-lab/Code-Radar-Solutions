#include <stdio.h>
int main(){
    int x,n;
    scanf("%d",&x);
    scanf("%d",&n);
    int bit=(x>>n)&1;
    printf("%d",bit);
    return 0;
}