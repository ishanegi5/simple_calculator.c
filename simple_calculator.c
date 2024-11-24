#include<stdio.h>
void main ()
{
    float num1,num2;
    char ch;
    printf("enter first number: ");
    scanf("%f",&num1);
    printf("enter second number: ");
    scanf("%f",&num2);
    printf("enter +,-,*,/: ");
    scanf(" %c",&ch);
    switch(ch){
        case '+':
        printf("%f + %f = %f",num1,num2,num1+num2);
        break;
        case '-':
        printf("%f - %f = %f",num1,num2,num1-num2);
        break;
        case '*':
        printf("%f * %f = %f",num1,num2,num1*num2);
        break;
        case '/':
        printf("%f / %f = %f",num1,num2,num1/num2);
        break;
        default:
        printf("invalid character entered.");
    }
    printf("\nName: Isha Negi \nRoll number: 24 CE 47\n");
}
