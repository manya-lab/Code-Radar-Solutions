#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int visited=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==visited)
        continue;
    }
    int count=0;
    for(int j=i+1;j<n;j++){
        if(arr[i]==ar[j]){
            count++;
            arr[j]=visited;
        }
        printf("%d %d",i,visited);
    }
    return 0;
}