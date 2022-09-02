#include <stdio.h>
#include <conio.h>
//Author: Safa Naaz
int main()
{
     int i,num,count=2;
     printf("Enter a number:");
     scanf("%d",&num);
     for (i=2; i<num; i++){
         if (num%i==0){
             count++;
         }
      }  
         if (num%2==0){
             printf("The no %d is a prime number",num);      
         }else{
             printf("The no %d is not a prime number",num);
         }
     getch();
return 0;
}