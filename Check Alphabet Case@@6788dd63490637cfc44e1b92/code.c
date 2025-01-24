#include <stdio.h>
int main(){
    char al;
    scanf("%c",&al);
    if(al>='a' && al<='z'){
        printf("Lowercase")
    }
    else{
        printf("Uppercase")
    }
    return 0;
}