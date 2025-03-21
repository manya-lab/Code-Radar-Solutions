#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&i);
        for(int i=1;i<=n;i++){
            if(i+1>i && i+2<i+1){
                printf("%d",i);
                break;
            }
        }
    }
    return 0;
}