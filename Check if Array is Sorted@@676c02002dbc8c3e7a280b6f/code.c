#include<Stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int s=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            s=1;
        }
    }
    if(s){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}