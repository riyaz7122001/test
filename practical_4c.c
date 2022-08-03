// Program to find the sum of number entered by the user
#include <stdio.h>
#include <conio.h>
int main()
{
    int n,sum=0,rem,new;
     printf("Enter the number :");
     scanf("%d",&n);
     new = n;
    while (n>0)
    {
        rem = n%10;
        sum = sum+rem;
        n = n/10;
    }
    printf("Sum of the enterd %d is :%d",new,sum);
    
getch();
return 0;
}