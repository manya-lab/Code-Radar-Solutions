#include<Stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>(n/2)){
            printf("%d",&arr[i]);
            break;

        }
        else{
            printf("-1");

        }
    }
    return 0;
}