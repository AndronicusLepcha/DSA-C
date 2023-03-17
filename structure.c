#include<stdio.h>
#include<string.h>

   struct student{
        int id;
        char name[100];
    }*a;
void main(){
    struct student p={19};
    a=&p;
    printf("Student name is %d",(*a).id);
}