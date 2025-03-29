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
    if(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    if(int i=0;i<n;i++){
        if(arr[i]>smax && smax!=max){
            smax=arr[i];
        }
        printf("%d",smax);
    }
    return 0;
}