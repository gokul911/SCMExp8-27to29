#include <stdio.h>
void main(){
    char op;
    int a,b;
    scanf("%d %d %c",&a,&b,&op);
    switch(op){
        case '+':
        printf("ADDITON=%d",a+b);
        break;
        case '-':
        printf("Difference done by Ojasva=%d",a-b);
        break;
    }
}