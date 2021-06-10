#include<stdio.h>
#include<stdlib.h>
void  create();
void display();

struct node
{
    int data;
    struct node *next;
};
struct node *head=0;

int main()
{
    struct node *temp;
    int choise;
    while(1)
    {
        printf("enter the choise:");
        scanf("%d",&choise);
        switch(choise)
        {
            case 1: create();
            break;
            case 2: display();
            break;
            case 3: exit(0);
            break;
        }
    }
    printf("%d",temp->next->data);
}

void create()
{
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the element in circular queue:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==0)
    {
        temp=head=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
    temp->next=head;
}

void display()
{
    struct node *temp;
    if(head==0)
    {
        printf("list is empty");
    }
    else
    {
        temp=head;
        while(temp->next!=head)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}
