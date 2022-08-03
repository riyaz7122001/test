#include<stdio.h>
int main()
{
int a,b,operator;
printf("Enter two numbers and one operator +,-,*,/\n");
scanf("%d %d",&a,&b);
scanf("%c",&operator);
switch(operator)
{
case '+' : printf("Addition of numbers is %d",(a+b));
break;
case '-' : printf("subtraction of numbers is %d",(a-b));
break;
case '*' : printf("multiplication of numbers is %d",(a*b));
break;
case '/' : printf("division of numbers is %d",(a/b));
break;
case '%' : printf("modulus of numbers is %d",(a%b));
break;
default: printf("invalid operator\n");
}
return 0;
}
