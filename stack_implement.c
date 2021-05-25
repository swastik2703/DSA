#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
int choise,n,stack[10],val;
int top=-1;
int main()
{
    printf("enter the size of stack\n");
    scanf("%d",&n);
    while(1)
    {
        printf("enter the choise \n");
        scanf("%d",&choise);
        switch(choise)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            
            default:printf("enter any other choise \n");
        }
    }
}

void push()
{
    if(top>=n-1)
    {
        printf("overflow\n");
    }
    else{
    printf("enter the value to be pushed in a stack \n");
    scanf("%d",&val);
    top++;
    stack[top]=val;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("underflow\n");
    }
    else{
    printf("the deleted element in the stack is :%d",stack[top]);
    top--;
    }
}

void display()
{
    int i;
    printf("the elements present in stacks are :\n");
    for(i=top;i>=0;--i)
    printf("%d\n",stack[i]);
}