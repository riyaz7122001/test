// Program to find the reverse of number entered by the user
#include <stdio.h>
#include <conio.h>
int main()
{
    int n,rev=0,rem,new;
     printf("Enter the number :");
     scanf("%d",&n);
     new = n;
    while (n>0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    printf("Reverse of the entered number %d is : %d",new,rev);
    
getch();
return 0;
}