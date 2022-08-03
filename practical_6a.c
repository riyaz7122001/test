//Proagram to find the sum of series using user defined function.
#include <stdio.h>
#include <conio.h>
int sumofseq(int n);
int main()
{
    int n,sum=0;
     printf("\nEnter the numer:");
     scanf("%d",&n);
     sum = sumofseq(n);
     printf("Sum of series is :%d",sum);
getch();
return 0;
}
int sumofseq(int n){
    int i,sum=0;
    for(i=1;i<=n;i++){
        sum = sum+i;
    }
    return sum;
}