#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&n);
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(arr[i]<arr[j]){
                    printf("Sorted");
                }
                else{
                    printf("Not Sorted");
                }
            }
        }
    }
    return 0;

}