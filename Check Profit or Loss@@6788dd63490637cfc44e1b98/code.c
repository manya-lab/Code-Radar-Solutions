#include <stdio.h>
int main(){
    int sp,cp;
    scanf("%d%d,&a,&b");
    if(sp>cp){
        printf("Profit");
    }
    else if(cp>sp){
        printf("Loss");
    }
    else if(sp==cp){
        printf("No Profit No Loss");
    }
    return 0;
}