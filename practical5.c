// Program to accept array elements from user to display array in reverse order
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[100],n,i;
    printf("Enter the number of elements to enter:");
    scanf("%d",&n);
     printf("Enter the elements in Array:\n");
     for (int i = 0; i < n; i++)
     {
         scanf("%d",&a[i]);
     }

     printf("The elements you entered in Array:\n");
     for (i = 0; i < n; i++)
     {
         printf("%d \t",a[i]);
     }

     printf("\nPrinting the Array in reverse order:\n");
     for (i = n-1; i >=0 ; i--)
     {
         printf("%d \t",a[i]);
     }
getch();
return 0;
}