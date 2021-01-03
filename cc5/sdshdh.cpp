#include "stdio.h"
#include "stdlib.h"
struct node
{
    int data;
    struct node *next;
};
typedef struct node N;
void insert_begin(N **, int x);
void insert_end(N **, int x);
void delete_begin(N **);
void delete_end(N **);
void display(N *);
bool search(node *head,int val)
    {
        node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == val)
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

int main()
{
    N *head;
    head = NULL;
    int ch, x;
    do
    {
        printf("\n menu\n1. insert node at begin\n2. insert node at end\n3. delete node from begin\n4. delete node from end\n5. display\n6. exit\nenter your choich ->");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\n enter the data part: ");
            scanf("%d", &x);
            insert_begin(&head, x);
            break;
        case 2:
            printf("\n enter the data part: ");
            scanf("%d", &x);
            insert_end(&head, x);
            break;
        case 3:
            delete_begin(&head);
            break;
        case 4:
            delete_end(&head);
            break;
        case 5:
            display(head);
            break;
        case 6:
            printf("\n THANK YOU");
            exit(0);
            break;
        default:
            printf("\n wrong input... try again...");
            system("cls");
            main();
            break;
        }
    } while (1);
    return 0;
}
void insert_begin(N **ptr, int x)
{
    N *temp;
    temp = (N *)malloc(sizeof(N));
    temp->data = x;
    if ((*ptr == NULL))
    {
        *ptr = temp;
        temp->next = NULL;
    }
    else
    {
        temp->next = *ptr;
        *ptr = temp;
    }
}
void insert_end(N **ptr, int x)
{
    N *temp, *c;
    temp = (N *)malloc(sizeof(N));
    temp->data = x;
    if ((*ptr == NULL))
    {
        *ptr = temp;
        temp->next = NULL;
    }
    else
    {
        c = *ptr;
        while (c->next != NULL)
        {
            c = c->next;
        }
        c->next = temp;
        temp->next = NULL;
    }
}
void display(N *p)
{
    N *c;
    c = p;
    while (c != NULL)
    {
        printf("%d -> ", c->data);
        c = c->next;
    }
}
void delete_begin(N **ptr)
{
    if ((*ptr == NULL))
    {
        printf("\n empty linked list...");
    }
    else
    {
        N *temp;
        temp = (N *)malloc(sizeof(N));
        temp->next = *ptr;
        temp = temp->next;
        printf("\nthe item %d has been deleted successfully.",temp->data);
        *ptr = temp->next;
    }
}
void delete_end(N **ptr)
{
    if ((*ptr == NULL))
    {
        printf("\n empty linked list...");
    }
    else
    {
        N *temp, *c;
        c = (N *)malloc(sizeof(N));
        temp = (N *)malloc(sizeof(N));
        c = *ptr;
        while (c->next != NULL)
        {
            temp=c;
            c = c->next;
        }
        temp->next=NULL;
        printf("\nthe item %d has been deleted successfully.",c->data);
    }
}