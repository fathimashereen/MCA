#include<stdio.h>
#include<stdlib.h>
void create();
void display();
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct  node *head,*newNode;
struct node *temp;

void main(){
    create();
    display();
}

void create(){
    int choice = 1;
    while (choice)
    {
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data\n");
        scanf("%d",&newNode->data);
        newNode->next = 0;
        newNode->prev = 0;
        if (head == 0)
            {
                head = temp = newNode;
            }
        else
            {
                temp->next = newNode;
                newNode->prev = temp;
                temp = newNode;
            }
        printf("Do you want to continue");
        scanf("%d",&choice );
    }
    
}

void display(){
    temp = head;
    while (temp != 0)
        {
            printf("%d"   , temp->data);
            temp = temp->next;
        }
}


