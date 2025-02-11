#include<stdio.h>
int main(){
    int x,n;
    scanf("%d",&x);
    scanf("%d",&n);
    int mask=~(1<<n);
    x=x&mark;
    printf("%d",x);
    return 0;
}