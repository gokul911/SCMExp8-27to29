#include <stdio.h>
void main(){
    char op;
    int a,b;
    scanf("%d %d %c",&a,&b,&op);
    switch(op){
        case '+':
        printf("Sum=%d",a+b);
        break;
        case '-':
        printf("A CONFLICTING SITUATION\n");
        printf("Subtraction=%d",a-b);
        break;
    }
}