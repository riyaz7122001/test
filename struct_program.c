#include <stdio.h>
#include <conio.h>
#include <string.h>
struct Student{
    int id;
    char name[30];
    int age;
    char div[10];
    char gender[10];
};
int main()
{
    struct Student s1;
    s1.id = 1;
    strcpy(s1.name,"Riyaz Shaikh");
    s1.age = 19;
    strcpy(s1.div,"A");
    strcpy(s1.gender,"Male");

     printf("Student id is :%d\n",s1.id);
     printf("Student name is :%s\n",s1.name);
     printf("Student age is :%d\n",s1.age);
     printf("Student div is :%s\n",s1.div);
     printf("Student gender is :%s\n",s1.gender);
getch();
return 0;
}