#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int found=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d",arr[i]);
                found=1;
                break;
            }
        }
        if(found){
            break;
        }
        if(!found){
            ("-1\n");
        }
        
    }
    return 0;
}