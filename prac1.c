
#define max_size 5;
int stack[max_size];
int top  = -1;

void push(int item)
{
    if(top == max_size-1)
    {
        printf("overflow and exit");
    }
    else
    {
        top++;
        stack[top] = item;
        printf("%d Item inserted.\n" , item);
    }

}
int main()
{
    int choice , item;
    printf("Enter your chouce:")
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    printf("enter value to push:")
    scanf("%d",&item);
    push(item)
        break;
    
    default:
        printf("Invalid choice");
    }

}