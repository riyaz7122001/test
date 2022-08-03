//Program for addition of two matrices.
#include <stdio.h>
#include <conio.h>
int main()
{
    int r,c,a[100][100],b[100][100],sum[100][100],i,j;
     printf("Enter the number of row (between 1 and 100) :");
     scanf("%d",&r);
     printf("Enter the number of columns (between 1 and 100) :");
     scanf("%d",&c);
     printf("Enter the elements of 1st matrix :\n");
     for (i = 1; i <=r ; i++)
     {
         for (j = 1; j <= c; j++)
         {
             printf("Enter elements a[%d][%d] :",i,j);
             scanf("%d",&a[i][j]);
         }
         
     }
     printf("Enter the elements of 2nd matrix :\n");
     for (i = 1; i <=r ; i++)
     {
         for (j = 1; j <= c; j++)
         {
             printf("Enter elements b[%d][%d] :",i,j);
             scanf("\n %d",&b[i][j]);
         }
         
     }
     printf("Additin of two matrices is :\n");
      for (i = 1; i <=r ; i++)
     {
         for (j = 1; j <= c; j++)
         {
             sum[i][j] = a[i][j]+b[i][j];
             printf("%d \t",sum[i][j]);
         }
         printf("\n");
     }     

     
getch();
return 0;
}