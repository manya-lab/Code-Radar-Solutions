#include <stdio.h>
int main(){
    int a;
    printf("enter a single integer");
    scanf("%d",&a);
    if(a>0){
        printf("Positive");
    }
    else if(a<0){
        printf("Negative");
    }
    else{
        printf("zero");
    }
    return 0;
}