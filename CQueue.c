#include<stdio.h>

#define N 5
int queue[N];
void enqueue(int);
void dequeue();
void display();
int front=-1,rear=-1;
void main()
{
 int a=1,element;
 while(1){
    printf(" \n1.enqueue 2.dequeue 3,display 4,exit\n");
    scanf("%d",&a);
    if(a==1)
    {
        printf("enter the element you want to insert\n");
        scanf("%d",&element);
        enqueue(element);
    }
    else if(a==2)
    dequeue();
    else if(a==3)
    display();
    else if(a==4)
    a=4;
    else printf("invalid");
     }
    


   
}
void enqueue(int x)
{
if(front==-1&&rear==-1)
{
    front=rear=0;
    queue[rear]=x;

}
else if((rear+1)%N==front)
{
    printf("queue is full\n");
}
else
{
    rear=(rear+1)%N;
    queue[rear]=x;
}
}
void dequeue()
{
    if(front==-1&&rear==-1)
    printf("queue is empty\n");
    else if(front==rear)
    {
        printf("deleted element is %d \n",queue[front]);
        front=rear=-1;
    }
    else{
        printf("\ndeleted element is %d \n",queue[front]);
        front=(front+1)%N;
    }
}
void display()
{
    int i=front;
    if(front==-1&&rear==-1)
    printf("empty\n");
    else{
        printf("queue is:\n");
        while(i!=rear)
        {
            printf(" %d  ",queue[i]);
            i=(i+1)%N;
        }
        printf(" %d ",queue[rear]);
        printf("front:%d\n rear:%d\n",front,rear);
           

    }
}