#include <bits/stdc++.h>

using namespace std;
struct Stack
{
    int size;
    int top;
    char *arr;
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
void push(struct Stack *ptr, char value)
{
    if (is_Full(ptr) == 1)
    {
        cout << "Stack is full (case:over flow )\n";
    }
    else
    {
        ptr->top++;

        ptr->arr[ptr->top] = value;
    }
}
char pop(struct Stack *ptr)
{
    if (is_Empty(ptr) == 1)
    {
        cout << "STack is empty (case:underflow)\n";
    }
    else
    {
        char value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}
int matching(char *exp)
{
    struct Stack *sp = (struct Stack *)malloc(sizeof(struct Stack));
    // sp->size=strlen(exp);
    sp->size = 10;
    sp->arr = (char *)malloc(sizeof(char) * sp->size);
    sp->top = -1;
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        // if (exp[i] == '('||'{'||'[')
        {
            push(sp, '(');
        }
        else if (exp[i] == ')')
        // else if (exp[i] == ')'||'}'||']')
        {
            if (is_Empty(sp))
            {
                return 0;
            }
            pop(sp);
        }
    }
    if (is_Empty(sp))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
 char *exp="{{[]{[]}}";
 if(matching(exp)==1)
 {
     printf("balaced parantheses\n");
 }
 else
    cout<<"unblanced parantheses\n";

}
