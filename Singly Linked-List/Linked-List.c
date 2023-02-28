#include<stdio.h>
#include<stdlib.h>
#include"STD_TYPE.h"

typedef struct node
{
    u16 data;
    struct node * next;
}NODE_TYP;

u16 count(NODE_TYP * head);
void print(NODE_TYP * head);

void addAtTheEnd(NODE_TYP * head);
NODE_TYP * addAtTheFront(NODE_TYP * head);
void addAfterGivenNode(NODE_TYP * head , u16 pos);

NODE_TYP * deleteFirst(NODE_TYP * head);
NODE_TYP * deleteLast(NODE_TYP * head);
void deletePos(NODE_TYP * head , u16 pos);
NODE_TYP * deleteAll(NODE_TYP * head);

void main()
{
    NODE_TYP * head = (NODE_TYP *)malloc(sizeof(NODE_TYP));
    NODE_TYP * second = (NODE_TYP *)malloc(sizeof(NODE_TYP));
    NODE_TYP * third = (NODE_TYP *)malloc(sizeof(NODE_TYP));
    u16 pos;
    u8 select;


    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=NULL;
    
    printf("Select:\n1-Add at the front\n2-Add at the end\n3-Add after a certain node\n"
            "4-Delete the first node\n5-Delete the last node\n6-Delete a certain node\n7-Delete the whole list\n");
    scanf("%d",&select);

    switch (select)
    {
    case 1:
        head = addAtTheFront(head);
        break;
    case 2:
        addAtTheEnd(head);
        break;
    case 3:
        printf("Enter the position: ");
        scanf(" %d",&pos);
        addAfterGivenNode(head , pos);
        break;
    case 4:
        head = deleteFirst(head);
        break;
    case 5:
        head = deleteLast(head);
        break;
    case 6:
        printf("Enter the position: ");
        scanf(" %d",&pos);
        deletePos(head , pos);
        break;
    case 7:
        head = deleteAll(head);
        break;
    default:
    printf("You Entered the wrong choice!");
        break;
    }
    
    print(head);
    count(head);    
}

/* counting */
u16 count(NODE_TYP * head)
{
    if (head == NULL)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        NODE_TYP * ptr = NULL ;
        ptr = head;
        u16 counter = 0;
        while (ptr!=NULL)
        {
            counter++;
            ptr = ptr->next;

        }
        printf("%d",counter);
        
    }
}

/*printing*/
void print(NODE_TYP * head)
{
    if (head == NULL)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        NODE_TYP * ptr = NULL ;
        ptr = head;
        while (ptr!=NULL)
        {
            printf("%d\n",ptr->data);
            ptr = ptr->next;

        }
        
    }
}

/* insert a new value at the end of the list */
void addAtTheEnd(NODE_TYP * head)
{
    NODE_TYP * temp = (NODE_TYP *)malloc(sizeof(NODE_TYP));
    printf("Enter the value: ");
    scanf("%d",&temp->data);
    temp->next = NULL;

    NODE_TYP * ptr = head;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    
}

/* insert a new value at the front of the list */
NODE_TYP * addAtTheFront(NODE_TYP * head)
{
    NODE_TYP * temp = (NODE_TYP *)malloc(sizeof(NODE_TYP));
    printf("Enter the value: ");
    scanf("%d",&temp->data);
    temp->next = head;

    head = temp;
    return head;
}

/* insert a new value after a given node */
void addAfterGivenNode(NODE_TYP * head , u16 pos)
{
    NODE_TYP * temp = (NODE_TYP *)malloc(sizeof(NODE_TYP));
    printf("Enter the value: ");
    scanf("%d",&temp->data);
    temp->next = NULL;

    NODE_TYP * prev = NULL ;
    prev = head;
    
    pos--;
    while (pos != 1)
    {
        prev = prev->next;
        pos--;
    }
    
    temp->next = prev->next;
    prev->next = temp;

}

/* delete the first node */
NODE_TYP * deleteFirst(NODE_TYP * head)
{
    NODE_TYP * temp = head;
    head = head->next;
    free(temp);
    return head;
}

/* delete the last node */
NODE_TYP * deleteLast(NODE_TYP * head)
{
    if (head == NULL)
    {
        printf("The linked list is empty");
    }
    else
    {
        if (head->next == NULL)
        {
           free(head);
           head = NULL;
        }
        else
        {
            NODE_TYP * temp = head;
            NODE_TYP * temp2 = head;
            while (temp->next != NULL)
            {
                temp2 = temp;
                temp = temp->next;
            }
            temp2->next = NULL;
            free(temp);
            temp = NULL;

        }
        
    }
    return head;
}

/* delete node at certain node */
void deletePos(NODE_TYP * head , u16 pos)
{
    NODE_TYP * current = head;
    NODE_TYP * prev = head;

    if (head == NULL)
    {
        printf("The linked list is empty");
    }
    else
    {
        if (pos == 1)
        {
            head = current->next;
           free(current);
           current = NULL;
        }
        else
        {
            while (pos != 1)
            {
                prev = current;
                current = current->next;
                pos--;
            }
            prev->next = current->next;
            free(current);
            current = NULL;

        }
        
    }
}

/* delete the whole list */
NODE_TYP * deleteAll(NODE_TYP * head)
{
    NODE_TYP * temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        free(head);
        head = temp;
    }
    return head;
    
}