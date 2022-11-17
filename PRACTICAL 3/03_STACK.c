#include<stdio.h>
#include<stdlib.h>
#define N 100
int TOP = -1 , stack[N] , item;

void push();
void pop();
void peek();
void change();
void display();

int main()
{
    int choice;
    while(1)
    {
        printf("-----------------------------------------------\n");
        printf(" 0:exit \n 1:push \n 2:pop \n 3:peek \n 4:change \n 5:display \n");
        printf("-----------------------------------------------\n");
        printf("\n CHOOSE OPERATION TO PERFORM STACK :");
        scanf("%d",&choice);
        printf("-----------------------------------------------\n");
        switch(choice)
        {
            case 0: exit(0);
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: peek();
                    break;
            case 4: change();
                    break;
            case 5: display();
                    break;
            default : printf(" ERROE 404 NOT FOUND \n");
                    break;
        }
    }
    return 0;
}
void push()  /* TO ENTER NEW ELEMENT TO STACK */
{
    if(TOP == N-1)
    {
        printf("OVERFLOW");
    }
    else
    {
        printf("\n Enter the element to be PUSHED :");
        scanf("%d",&item);
        TOP += 1;
        stack[TOP] = item;
    }
    display();
}
void pop() /* TOP ELEMENT OF STACK IS DELETED */
{
    if( TOP == -1)
    {
        printf("UNDERFLOW \n");
    }
    else
    {
        item = stack[TOP];
        TOP -= 1; 
    }
    display();
}
void peek() /* SHOWS TOP ELEMENT OF STACK */
{
    item = stack[TOP];
    printf("\n Top of the stack is %d ",item);
    printf("\n");
    display();
}
void change() /* REPLACE ANY ELEMENT IN STACK */
{
    int new ,old;
    printf("\n Enter the element you want to change :");
    scanf("%d",&old);
    printf("\n Enter the new element you want to enter:");
    scanf("%d",&new);
    for(int i=0;i<=TOP;i++)
    {
        if(stack[i]==old)
        {
            stack[i]=new;
        }    
    }

    display();
}
void display() /* DISPLAY THE ENTIRE STACK */
{
    if(TOP >= 0)
    {
        printf("\n All element of the stack :\n");
        for(int i=TOP ; i>=0 ; i--)
        {
            printf("%d \n",stack[i]);
        }
    }
    else
    {
        printf("\n STACK IS EMPTY");
    }
}
