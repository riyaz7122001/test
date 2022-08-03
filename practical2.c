//Progrms to accept two numbers and one arithmetic operator and using the switch case display the result.
#include <stdio.h>
#include <conio.h>
int main()
{
    int num1,num2,result;
    char choice;
     printf("Enter the two numbers and the operator: +,-,*,/,%:");
     scanf("%d %d",&num1,&num2);     
     scanf(" %d",&choice);

     switch (choice)
     {
     case '+':
         result = num1+num2;
         printf("Addition of %d and %d is: %d",num1,num2,result);
         break;

     case '-':   
         result = num1-num2;
         printf("Subtraction of %d and %d is: %d",num1,num2,result);
         break;

     case '*':
         result = num1*num2;
         printf("Multiplication of %d and %d is: %d",num1,num2,result);
         break;

     case '/':
         result = num1/num2;
         printf("Division of %d and %d is: %d",num1,num2,result);
         break;

     case '%':   
         result = num1%num2;
         printf("Modulus of %d and %d is: %d",num1,num2,result);
         break;
     
     default:
        printf("Please enter a valid operator!");
         break;
     }

return 0;
}