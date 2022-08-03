#include <stdio.h>
#include <conio.h>
int main()
{

     int a[10] = {10,23,2,34,4,5,56,12,43,45};
     for (int i=1; i<=10; i++){
        
         for (int j=1; j<=10; j++){
        
             if (a[j+1] < a[j]){
                 int t = a[j+1];
                 a[j+1] = a[j];
                 a[j] = t;
             }
         }
     }
     printf("\n Sorted Array is:\n");
     for (int i=1; i<10; i++){
         printf("%d \t",a[i]);
     }
return 0;
}