#include <stdio.h>

#define size 10
int stack[size];
int top = -1;

int overflow()
{
    if(top == (size-1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int underflow()
{
    if(top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int n)
{
    if(!overflow())
    {
        top += 1;
        stack[top] = n;
    }
    else
    {
        printf("Stack Overflow!\n");
    }
}

void pop()
{
    if(!underflow())
    {
        top -= 1;
    }
    else
    {
        printf("Stack Underflow!\n");
    }
}

void peak()
{
    printf("%d\n",stack[top]);
}

int main()
{
    int arr[size],n,choice,i=0;
    //printf("Enter the size of stack: ");
    //scanf("%d",&n);
    while(1)
    {
        printf("What operation would you like to perform?\n");
        printf("1 - Push, 2 - Pop, 3 - Peak, 4 - Display Stack, 5 - Exit\n");
        scanf("%d",&choice);
        if(choice == 1)
        {
            printf("Enter the number to push: ");
            scanf("%d",&arr[i]);
            push(arr[i]);
            i += 1;
        }
        else if(choice == 2)
        {
            pop();
        }
        else if(choice == 3)
        {
            peak();
        }
        else if(choice == 4)
        {
            if(top == -1)
            {
                printf("Stack is Empty\n");
            }
            else{
            while(!underflow())
            {
                 peak();
                 pop();
            }
            }
        }
        else if(choice == 5)
        {
            break;
        }
        else
        {
            printf("Enter Valid Choice\n");
        }
    }
    

    return 0;
}