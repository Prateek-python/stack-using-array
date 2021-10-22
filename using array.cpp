#include <bits/stdc++.h>

using namespace std;
struct Stack
{
    int size;
    int top;
    int *arr;
};

int is_Empty(struct Stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
        return 0;
}
int is_Full(struct Stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct Stack *ptr, int value)
{
    if (is_Full(ptr)==1)
    {
        cout << "Stack is full (case:over flow )\n";
    }
    else
    {
        ptr->top++;
    
    ptr->arr[ptr->top] = value;}
}
void pop(struct Stack *ptr)
{
    if (is_Empty(ptr)==1)
    {
        cout << "STack is empty (case:underflow)\n";
    }
    else
    {
        int value = ptr->arr[ptr->top];
        ptr->top--;
        cout << "poped number is" << value << endl;
    }
}

int main()
{
    struct Stack *sp = (struct Stack *)malloc(sizeof(struct Stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr=(int *)malloc(sizeof(int)*sp->size);
    push(sp, 50);
    push(sp,60);
    push(sp,77);
  
    return 0;
}