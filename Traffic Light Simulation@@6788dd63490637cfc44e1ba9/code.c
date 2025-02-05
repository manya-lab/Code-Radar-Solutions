#include <stdio.h>
int main(){
    char ar;
    scanf("%c",&ar);
    if(ar==R){
        printf("Stop");
    }
    else if(ar==Y){
        printf("Slow Down");
    }
    else if(ar==G){
        printf("Go");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}