#include<bits/stdc++.h>
#include<iostream>

struct Stack 
{
    int data;
    struct Stack *link;
};
struct Stack *top=NULL;
int is_Empty()
{
    if(top==NULL)
    {
        return 1;
    }
    else return 0;
}
void push(int data)
{
    // struct Stack *new_node=new struct Stack;
    struct Stack *new_node=(struct Stack*)malloc(sizeof(new_node));
    if(new_node==NULL){
        printf("stack overflow case \n");
    }
    new_node->data=data;
    new_node->link=NULL;
    new_node->link=top;
    top=new_node;
}

void pop()
{
    struct Stack *temp;
    temp=top;
    if(is_Empty())
    {
        printf("Stack underflow\n");
        exit(1);
    }
    int val=temp->data;
    top=top->link;
    free(temp);
    temp=NULL;
    printf("poped element :%d\n",val);

}
void peek()
{
    if(is_Empty())
    {
        printf("stack underflow\n");
        exit(1);
    }
    printf("top most element is %d \n",top->data);
}
void print()
{
    struct Stack *temp=(struct Stack *)malloc(sizeof(struct Stack));
    temp=top;
    if(is_Empty())
    {
        printf("stack underflow\n");
    }
    printf("stack element are:\n");
    while(temp!=NULL)
    {
        printf("%d \n",temp->data);
        temp=temp->link;
    }
    printf("\n");
}
int main()
{
    push(60);
    push(70);
    push(80);
    push(91);
    push(25);
    peek();
    print();
    pop();
    pop();
    print();
    
    return 0;
}

