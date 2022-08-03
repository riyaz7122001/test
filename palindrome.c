// Program to find the palindrome of number entered by the user
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
    if(new==rev){
        printf("The entered number %d is a palindrome number",new);
    }
    else{
        printf("The entered number %d is not a palindrome number",new);
    }
    
getch();
return 0;
}