#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    int m=0;
    int q=n-1;
    while(m<q){
        int temp=arr[m];
        arr[m]=arr[q];
        arr[q]=temp;
        m++;
        q--;
    }
    printf("reversed array");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
    
}
