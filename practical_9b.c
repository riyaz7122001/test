#include <stdio.h>
#include <conio.h>
int main()
{
     printf("Program for reading the text file");
     char num = 'g';
     FILE *fp;
     fp = fopen("sha.txt","w+");
     putc('B',fp);
     fprintf(fp,"%c",num);
     fputc(num,fp);

     //move the cursor to zeroth bite
     fseek(fp,0,0);
     //fseek(0);

     while (!(feof(fp)))
     {
         /* code */
         int k = getc(fp);
         printf("%c",(char)k);
     }
     fclose(fp);
     
     
getch();
return 0;
}