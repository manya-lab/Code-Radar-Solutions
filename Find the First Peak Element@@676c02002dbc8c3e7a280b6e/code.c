#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        
         if(arr[i+1]>arr[i] && arr[i+2]<arr[i]){
            printf("%d",arr[i+1]);
            break;
        }
        else if(arr[i]>arr[i+1]){
            printf("%d",arr[i]);
            break;
        }
        else if(arr[n-1]>arr[n-2]){
            printf("%d",arr[n-1]);
            break;
        }
        else{
            printf("-1");
            break;
        }

    }
    return 0;
}