// Program based on UNION DATA STRUCTURE union is a user defined data type which allows u to store different data types but in the same memory.
#include <stdio.h>
#include <string.h>
#include <conio.h>
union teacher{
    int tid; // 4 bytes of memory
    float salary; //4 bytes of memory
    char tname[50]; // 50 bytes of memory 
};
int main()
{
    union teacher t1,t2;
    t1.tid=1;
     printf("\nTeacher id is :%d",t1.tid);
     t1.salary = 50000.8;
     printf("\nTeacher salary is :%f",t1.salary);
     strcpy(t1.tname,"Prof.Riyaz Shaikh");
     printf("\nName of a Teacher is :%s",t1.tname);
     printf("\nSize of union data type is :%d ",sizeof(t1));
     t2.tid = 2;
     printf("\nTeacher id is :%d",t2.tid);
     t2.salary = 60000.70;
     printf("\nTeacher salary is :%f",t2.salary);
     strcpy(t2.tname,"Prof.Ritika Lala");
     printf("\nName of Teacher is :%s",t2.tname);
     printf("\nSize of union data type is :%d ",sizeof(t2));
getch();
return 0;
}