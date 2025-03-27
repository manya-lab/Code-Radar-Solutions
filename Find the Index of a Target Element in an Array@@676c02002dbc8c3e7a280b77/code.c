#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    int x;
    int s=1;
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            printf("%d",arr[i]);
            break;
        }
        }
    return -1;
    }