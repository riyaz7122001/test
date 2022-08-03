//Program using struct program.
#include <stdio.h>
#include <string.h>
#include <conio.h>
struct Student{
    int id;
    char name[30];
    struct Address{
        char city[30];
    }ad;
};

int main()
{
    struct Student s1,s2;
    s1.id = 43;
    printf("Student id is :%d",s1.id);
    strcpy(s1.name,"Riyaz Shaikh");
    printf("\nStudent name is :%s",s1.name);
    strcpy(s1.ad.city,"Mumbai");
    printf("\nStudent city name is:%s",s1.ad.city);
    s2.id = 16;
    printf("\nStudent id is :%d",s2.id);
    strcpy(s2.name,"Kaheesha Shaikh");
    printf("\nStudent Name is :%s",s2.name);
    strcpy(s2.ad.city,"Mumbai");
    printf("\nStudent City is :%s",s2.ad.city);
    getch();
    return 0;
}    