#include <stdio.h>
int sum(int ,int );
int sub(int , int);
int mul(int , int);
int div(int , int);
#include <conio.h>
int main()
{
    int num1,num2,total,subtract,multiplication,division;
     printf("Enter first number:");
     scanf("%d",&num1);
     printf("\nEnter second number:");
     scanf("%d",&num2);
     total = sum(num1,num2);
     subtract = sub(num1,num2);
     multiplication = mul(num1,num2);
     division = div(num1,num2);

     printf("\nAddition of %d and %d is:%d",num1,num2,total);
     printf("\nSubtraction of %d and %d is:%d",num1,num2,subtract);
     printf("\nSubtraction of %d and %d is:%d",num1,num2,multiplication);
     printf("\nSubtraction of %d and %d is:%d",num1,num2,division);
getch();
return 0;
}
int sum(int x,int y){
    int res;
    res=x+y;
    return res;
}

int sub(int x, int y){
    int ans;
    ans = x-y;
    return ans;
}

int mul(int x, int y){
    int ans;
    ans = x*y;
    return ans;
}

int div(int x, int y){
    int res;
    res = x-y;
    return res;
}