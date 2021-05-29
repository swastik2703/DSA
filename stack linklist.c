#include<stdio.h>
#include<stdlib.h>
void push();
void display();
void peek();
void pop();

struct node
{
    int data;
    struct node *next;
};
struct node *top=NULL;

int main()
{
    int choise;
    while(1)
    {
    printf("enter the choise \n");
    scanf("%d",&choise);
    switch(choise)
    {
        case 1: push();
        break;
        
        case 2: display();
        break;
        
        case 3: peek();
        break;
        
        case 4: pop();
        break;
        
        default :printf("wrong choise \n");
    }
    }
}

void push()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data in stack \n");
    scanf("%d",&newnode->data);
    newnode->next=top;
    top=newnode;
}

void display()
{
    struct node *ptr;
    ptr=top;
    if(top==NULL)
    {
        printf("list empty\n");
    }
    else
    {
        while(ptr!=NULL)
        {
        printf("the elements are %d\n",ptr->data);
        ptr=ptr->next;
    }
    }
}

void peek()
{
    if(top==NULL)
    {
        printf("list is empty \n");
    }
    else
    {
        printf("the topmost element is %d\n",top->data);
    }
}

void pop()
{
    struct node *ptr;
    ptr=top;
    printf("the poped element is %d\n",top->data);
    top=top->next;
    free(ptr);
}
