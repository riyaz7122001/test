#include <stdio.h>
#include <conio.h>
int main()
{
     int A[3][3],B[3][3],C[3][3],i,j;
     printf("Enter the numbers in A matrix:\n ");
     for (i=1; i<=3; i++){
         for (j=1; j<=3; j++){
         scanf("%d",&A[i][j]);
     }    
    } 
     printf("\n Enter the elements in B matrix:\n ");
     for (i=1; i<=3; i++){
          for (j=1; j<=3; j++){
             scanf("%d",&B[i][j]);
     }
    } 
    printf("\n The Elements of A matrix are:");
    for (i=1; i<=3; i++){
        for (j=1; j<=3; j++){
            printf("%d\t",A[i][j]);
        }
    }
    
    printf("\n The Elements in B matrix are:");
    for (i=1; i<=3; i++){
        for (j=1; j<=3; j++){
            printf("%d \t",B[i][j]);
        }
    }

    printf("\n Addition of A and B matrix is:");
    for (i=1; i<=3; i++){
        for (j=1; j<=10; j++){
            C[i][j] = A[i][j] + B[i][j];
            printf("%d \t",C[i][j]);
        }
        printf("\n");
    }
getch();
return 0;
}