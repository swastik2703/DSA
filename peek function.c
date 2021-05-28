#include<stdio.h>
#include<stdlib.h>
void push();
// void pop();
void peek();
void display();
int top=-1,stack[10];
int main()
{
    int choise,n;
    printf("enter the size of array \n");
            scanf("%d",&n);
    while(1)
    {
        printf("enter the choise\n");
        scanf("%d",&choise);
        switch(choise)
        {
            case 1: 
            push(n);
            break;
            
            // case 2: pop();
            // break;
            
            case 3: peek();
            break;
            
            case 4: display();
            break;
            
            default:printf("enter other choise\n");
        }
    }
}

void push(int n)
{
    int x;
    printf("enter the element in the stack :");
    scanf("%d",&x);
    if(top==n-1)
    {
        printf("overflow\n");
    }
    else
    {
        top++;
        stack[top]=x;
        
    }
}

// void pop()
// {
//     if(top==-1)
//     {
//         printf("underflow");
//     }
//     else
//     {
//         top--;
//     }
// }

void peek()
{
    if(top==-1)
    {
        printf("stack empty \n");
    }
    else
    {
        printf("the top is pointing to the element:%d\n",stack[top]);
    }
}

void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("the elements in stack are %d\n",stack[i]);
    }
    
}

