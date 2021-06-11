#include<stdio.h>
#include<stdlib.h>
void create();
void display();

struct node
{
    int data;
    struct node *next;
};
struct node *last=0;

int main()
{
    int ch;
    while(1)
    {
        printf("enter the choise:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: create();
            break;
            
            case 2: display();
            break;
        }
    }
}

void create()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the newnode:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(last==0)
    {
        last=newnode;
        last->next=newnode;
    }
    else
    {
        newnode->next=last->next;
        last->next=newnode;
        last=newnode;
    }
}

void display()
{
    struct node *temp;
    temp=last->next;
    if(last==0)
    {
        printf("empty\n");
    }
    else
    {
        temp=last->next;
        while(temp->next!=last->next)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
        printf("%d\n",temp->data);
    }
}