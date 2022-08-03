#include <stdio.h>
#include <conio.h>
int main()
{

     int a[10] = {10,23,2,34,4,5,56,12,43,45};
     int counter = 1;
     while (counter < 10)
     {
             
     for (int i=1; i<=10; i++){ 
             if (a[i]>a[i+1]){
                 int t = a[i];
                 a[i] = a[i+1];
                 a[i+1] = t;
             }
         }
         counter++;
     }    
     printf("\n Sorted Array is:\n");
     for (int i=1; i<10; i++){
         printf("%d \t",a[i]);
     }
return 0;
}