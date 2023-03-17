#include<stdio.h>
#include<stdbool.h>
#define maxsize 4

int arr[maxsize];
int j;
int an=0;

void enqueue(int x);
void dequeue();
int isEmpty();
int isFull();

int front=-1;
int rear=-1;

void enqueue(int x){
    if(isEmpty()){
        int data=x;
        rear=0;
        front=0;
        arr[rear]=data;
        printf("inserted Data=%d \n",data);
        printf("first data inserted\n incremented rear and front to 0 \n");
    }
    else if(isFull()){
        printf("Queue is full\n");
    }
    else{
        int data=x;
        rear=rear+1;
        arr[rear]=data;
        printf("inserted data =%d\n",data);
    }
}

void dequeue(){
    if(isEmpty()){
        printf("queue is empty\n");
       // return 0;
    }
    else{
        //return arr[rear];
        printf("deleted item %d\n",arr[rear]);
        rear=rear+1;
    }
    
}

int isEmpty(){
    if(rear == -1 && front== -1){
        return 1;
    }
    return 0;
}
int isFull(){
    if(rear==maxsize-1){
        return 1;
    }
    return 0;
}
int main(){
    enqueue(100);
      enqueue(100);
        enqueue(100);
          enqueue(100);
            enqueue(100);
            enqueue(100);
    dequeue();
        
    return 0;

}