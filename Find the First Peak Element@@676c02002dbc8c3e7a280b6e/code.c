#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        for(int i=1;i<=n;i++){
            if(i+1>i && i+2<i+1){
                printf("%d",i+1);
                break;
            }
        }
    }
    return 0;
}