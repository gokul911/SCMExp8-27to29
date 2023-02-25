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
        printf("Difference=%d",a-b);
        break;
    }
}
