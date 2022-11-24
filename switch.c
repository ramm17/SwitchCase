#include<stdio.h>
#include<conio.h>
int main()
{
    int op;
    float num1,num2,result;
    printf("Choose any operator(+,-,*,/):");
    scanf("%c",&op);
    printf("Enter any two numbers:\n");
    scanf("%f%f",&num1,&num2);
    switch(op)
    {
    case '+':
        result=num1+num2;
        printf("Addition=%.2f",result);
        break;
    case '-':
        result=num1-num2;
        printf("Difference=%.2f",result);
        break;
    case '*':
        result=num1*num2;
        printf("Product=%.2f",result);
        break;
    case '/':
        result=num1/num2;
        printf("Division=%.2f",result);
        break;
    default:
        printf("Error! Invalid Operator");
    }
    getch();
    return 0;

}
