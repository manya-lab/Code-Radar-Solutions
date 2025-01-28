#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    a=pow(b,2);
    if(a==b){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}