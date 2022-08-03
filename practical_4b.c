//Program to print the factorial of a number using while loop.
#include <stdio.h>
#include <conio.h>
int main()
{
    int n,i;
     int fact = 1;
     printf("Enter a number :");
     scanf("%d",&n);
    i=n;
     while (n>0){
         fact = fact * n;
         n--;
     }
    printf("Factorial of a %d is : %d",i,fact);
getch();
return 0;
}