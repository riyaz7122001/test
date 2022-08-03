/*Program to accept age of the person and depends on age display messages whether the person is eligible for voting or not. Use goto statement.*/   
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
     int age;
      printf("Enter the age :");
      scanf("%d",&age);
      
      if (age>=18)
      {
           goto label;
      }
      else
      {
           printf("You are not elligible for voting");
           exit(0);
      }
      label: printf("You are elligible for voting");
      
      

getch();
return 0;
}