#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top=NULL;



void push(int value)
{
    struct node *temp;
    temp =(struct node*) malloc(sizeof(struct node));
    temp -> data = value;
    temp -> next = top;
    top = temp;
}

int pop()
{
    node *temp;
    int n;
    temp = top;
    n = temp->data;
    top = top->next;
    free(temp);
    printf("The popped element is:%d\n",n);
    return n;
}

int Peek()
{
    return top->data;
}

int isempty()
{
    return top==NULL;
}

void display(struct node *head)
{
    if(head == NULL)
    {
        printf("NULL\n");
    }
    else
    {
        printf("%d ", head -> data);
        display(head->next);
    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    printf("The elements in the stack after push are: ");
    display(top);
    printf("The top is %d\n",Peek());
    pop();
    printf("The top after pop is %d\n",Peek());
    printf("The elements in the stack after pop are:");
    display(top);
    return 0;
}

