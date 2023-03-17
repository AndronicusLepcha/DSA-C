#include<stdio.h>
#include<stdlib.h>
# define size 4 //macro definition
int arr[size],i,j,k,n;
int front=-1;
int rear=-1;

void dequeue();
void enqueue();
//void display_queue();
//int isfull();
//int isempty();
void enqueue(int x){
    if(rear==size-1){
        printf("Overflow");
    }
    else if(front ==-1 && rear==-1){
        front=0;
        rear=0;
        arr[rear]=x;
        printf("Element inserted %d\n",x);
    }
    else{
        rear++;
        arr[rear]=x;
        printf("Element inserted %d\n",x);
    }

}
void dequeue(){
    if(front==-1){
        printf("Queue is Empty");
    }
    else if(front==rear){
        printf("Deleted item is %d\n",arr[front]);
        front=rear=-1;
    }
    else{
        printf("Deleted item is %d\n",arr[front]);
        front++;
    }
}
void main(){

enqueue(12);
enqueue(23);
enqueue(90);
enqueue(25);
dequeue();
dequeue();

}  