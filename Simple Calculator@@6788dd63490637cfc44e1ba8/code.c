#include<stdio.h>
int main(){
    int a,b;
    char ch;
    scanf("%d %d",&a,&b);
    scanf("%c",&ch);
    switch(ch){
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            if(b!=0){
                printf("%d",a/b);
            }
            else{
                printf("error");
            }
            break;
        default:
            printf("error");
    }
    return 0;
}