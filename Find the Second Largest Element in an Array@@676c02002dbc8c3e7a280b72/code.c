#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]<max && arr[i]>smax){
            smax=arr[i];
        }
        else{
            printf("-1\n");
        }
    }
    printf("%d ",smax);
    return 0;
}