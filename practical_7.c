//Program on String Manipulation.
#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    char s1[30] = "Dad";
    char s2[30] = "Mad";
    int t1,t2;
     printf("\nFirst String is :%s",s1);
     printf("\nLength of First String is :%d",strlen(s1));
     printf("\nSecond String is :%s",s2);
     printf("\nLength of Second String is :%d",strlen(s2));
    int highest = strcmp(s1,s2);
     if(highest == 0){
         printf("\nBoth Strings are equal %d",strcmp(s1,s2));
     }
     else if(highest < 0){
         printf("\nFirst String is smaller than Second String %d",strcmp(s1,s2));

     }else{
         printf("\nSecond String is larger than First String %d",strcmp(s1,s2));
     }
     printf("\nUsing the String concatination function :");
     printf("\n %s",strcat(s1,s2));
     printf("\nUsing the String character function :");
     printf("\n %s",strchr("Computer Science",'e'));
getch();
return 0;
}