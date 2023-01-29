#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    void *next;
    char data;
} Node;

Node *head = NULL;

//Add
Node *prependNode(char data)
{
    Node *new = malloc(sizeof(Node));
    // List is empty
    if (head == NULL)
    {
        new->data = data;
        head = new;
        new->next = NULL;
    }
    else
    {
        new->data = data;
        new->next = head;
        head = new;
    }
    return new;
}

//Remove


//Insert


//Print list
void printList()
{
    Node *current = head;
    printf("[");
    while (1)
    {
        if(current->next == NULL)
        {
             printf("%c", current->data);
             break;
        }
        else
        {
            printf("%c, ", current->data);
            current = current->next;
        }
    }
    printf("]\n");
    return;
}


//Menu
void printMenu()
{
    printf("1. Prepend\n");
    printf("2. Append\n");
    printf("3. Remove\n");
    printf("4. Insert\n");
    printf("5. Show list\n");
    printf("6. Exit\n");
    return;
}

int main(int argc, char **argv)
{
    int choice;
    char data;
    do
    {
        printMenu();
        int received = scanf("%d", &choice);
        if (received == 1)
        {
            switch(choice)
            {
                case 1: 
                    printf("What character to add?\n");
                    scanf(" %c", &data);
                    Node *new = prependNode(data);
                    break;
                case 2: 
                    break;
                case 3: 
                    break;
                case 4:
                    break;
                case 5:
                    printList();
                    break;
                case 6:
                    break;
                default:
                    printf("Unknown command");
                    break;
            }
        }
    } while(choice!=6);
    
    return 0;
}
