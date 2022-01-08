#include<stdio.h>

int main(){

    char oper;

    printf("Enter the operator is \n");
    scanf("%c",&oper);

    int num1,num2;

    printf("The two numbers are :\n");
    scanf("%d%d",&num1,&num2);

    switch(oper){

        case '+' :
        printf("%d",num1+num2);
        break;

        case '-' :
        printf("%d",num1-num2);
        break;

        case '*' :
        printf("%d",num1*num2);
        break;

        case '/' :
        printf("%f",(float)num1/num2);
        break;

        case '%' :
        printf("%d",num1%num2);
        break;

        default :
        printf("Enter correct operator");
        break;
        
    }
    

    return 0;
}
