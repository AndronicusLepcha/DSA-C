#include<stdio.h>
#include<stdlib.h>
int choice=1,count=0;

struct node{
    int data;
    struct node *next;
};
struct node *head,*newnode,*temp;
void create_node(){

    head=NULL;
    while(choice){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data to store in the node");
        scanf("%d",&newnode->data);
        newnode->next=0;

        if(head == NULL){
            head=newnode;
            temp=head;
        }
        else{
            //head->next=newnode; it cannot take node 3 so this is incorrect
            temp->next=newnode;
            temp=newnode;
        }
        printf("do you want to add node \nEnter your choice(0/1) 0-no and 1-yes");
        scanf("%d",&choice);
    }
}
void display_node(){
    temp=head;
    while(temp !=0 ){
        printf("Data \n");
        printf("%d",temp->data);
        printf("\n");
        temp=temp->next;
    }
}
void main(){
    create_node();
    display_node();
}