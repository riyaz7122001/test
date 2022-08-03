// Program on pointer
#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    int *ptr; 
    //pointer is used to store memory address of variable 
    // pointer is special data variable because it is going to store address of another variable
    // %u is used for displaying the address of the variable
    ptr = &a;
    a = 10;
     printf("Program to see memory handling through pointers");
     printf("\n The value of a is %d",a);
     printf("\n The value of address of a or the value of ptr is %u",ptr);
     printf("\n The value of a using ptr is %u",*ptr);
     ptr++;
     //printf("\n The value of address of a or the value of ptr is %u",ptr);
     printf("\n The value of address of a or the value of ptr is %u",ptr);
     printf("\n The value of address of variable a is %d",&a);

getch();
return 0;
}