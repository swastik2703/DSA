#include<stdio.h>
#include<stdlib.h>
void insert();
void delete();
void display();
struct node
{
    int data;
    struct node *next;
};
struct node *front=0,*rear=-0;

int main()
{
    int choise;
    while(1)
    {
    printf("enter the choise:");
    scanf("%d",&choise);
    switch(choise)
    {
        case 1: insert();
        break;
        case 2: delete();
        break;
        case 3: display();
        break;
    }
    }
}

void insert()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the newnode in queue:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(front==0 && rear==-0)
    {
        front=rear=newnode;
        rear->next=front;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
        rear->next=front;
    }
}

void delete()
{
    struct node *temp;
    temp=front;
    if(front==0 && rear==0)
    {
        printf("queue empty\n");
    }
    else if(front==rear)
    {
        front=rear=0;
        free(temp);
    }
    else
    {
        front=front->next;
        free(temp);
        rear->next=front;
    }
}

void display()
{
    struct node *temp;
    temp=front;
    if(front==0 && rear==0)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("the elements in the queue are:- \n");
        while(temp->next!=front)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}