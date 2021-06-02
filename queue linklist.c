#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void peek();
void delete();
struct node
{
    int data;
    struct node *next;
};
struct node *front=NULL,*rear=NULL;

int main()
{
    int choise;
    while(1)
    {
        printf("enter the choise \n");
        scanf("%d",&choise);
        switch(choise)
        {
            case 1: create();
            break;
            
            case 2: display();
            break;
             
            case 3: peek();
            break;
            
            case 4: exit(0);
            break;
            
            case 5: delete();
            break;
                
            default: printf("enter other choise\n");

        }
    }
}

void create()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the newnode data\n");
    scanf("%d",&newnode->data);
    if(front==0 && rear==0)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=rear->next;
    }
}

void display()
{
    struct node *temp;
    if(front==0 && rear==0)
    {
        printf("queue empty");
    }
    else
    {
        temp=front;
        while(temp!=NULL)
        {
            printf("the elements in queue are :%d\n",temp->data);
            temp=temp->next;
        }
    }
}

void peek()
{
     if(front==0 && rear==0)
    {
        printf("queue empty");
    }
    else
    {
        printf("the top element in queue is: %d",front->data);
    }
}

void delete()
{
    struct node *temp;
    if(front==0 && rear==0)
    {
        printf("queue empty");
    }
    else
    {
        temp=front;
        front=front->next;
        free(temp);
    }
}