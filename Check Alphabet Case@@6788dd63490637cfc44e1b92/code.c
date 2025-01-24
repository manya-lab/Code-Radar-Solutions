#include <stdio.h>
int main(){
    char al;
    scanf("%c",&al);
    if(al>='a' && al<='z'){
        printf("Lowercase")
    }
    else if(al>='A' && al<='Z'){
        printf("Uppercase")
    }
    return 0;
}