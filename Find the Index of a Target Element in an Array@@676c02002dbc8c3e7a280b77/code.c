#include<Stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            printf("%d",arr[i]);
        }
        else{
            printf("-1");
        }
    }
    return 0;
}