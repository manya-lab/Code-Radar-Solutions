#include <stdio.h>
int main(){
    char string1[100];
    int x;
    char string2[100];
    scanf("%s%d%s",&string1,&x,&string2);
    printf("Name: %s\n",string1);
    printf("Age: %d\n",x);
    printf("Hobby: %s\n",string2);
    return 0;
}