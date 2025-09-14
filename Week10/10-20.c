// Lab 10-20 Linked List - Taking Turns

#include <stdio.h>
#include <stdlib.h>

typedef struct DataNode
{
    int data;
    struct DataNode* next;
} DataNode;

typedef struct SinglyLinkedList
{
    unsigned int count;
    DataNode* head;
} SinglyLinkedList;

DataNode* createDataNode(int data)
{
    DataNode* newNode = (DataNode*) malloc(sizeof(DataNode));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

SinglyLinkedList* createSinglyLinkedList()
{
    SinglyLinkedList* list = (SinglyLinkedList*) malloc(sizeof(SinglyLinkedList));
    list->head = NULL;
    list->count = 0;
    return list;
}

int getData(SinglyLinkedList* list, int index)
{
    int i = 0;
    DataNode* pointer = list->head;
    while (pointer != NULL)
    {
        if (i++ == index)
        {
            return pointer->data;
        }
        pointer = pointer->next;
    }
}

void traverse(SinglyLinkedList* list)
{
    if (list->count == 0)
    {
        printf("This is an empty list.\n");
        return;
    }
    struct DataNode* pointer = list->head;
    while (pointer->next != NULL)
    {
        printf("%d -> ", pointer->data);
        pointer = pointer->next;
    }
    printf("%d\n", pointer->data);
}

void insert_last(SinglyLinkedList* list, int data)
{
    DataNode* pNew = createDataNode(data);
    if (!list->count)
    {
        list->head = pNew;
    }
    else
    {
        DataNode* pointer = list->head;
        while (pointer->next != NULL)
        {
            pointer = pointer->next;
        }
        pointer->next = pNew;
    }
    list->count++;
}

void sorting(SinglyLinkedList* list, int* num, int n)
{
    int start = 0, end = n - 1, rev = 0;
    for (int i = 0; i < n; i++)
    {
        if (!(i % 2))
        {
            rev = !rev;
        }
        if (rev)
        {
            if (!(i % 2))
            {
                insert_last(list, *(num + end--));
            }
            else
            {
                insert_last(list, *(num + start++));
            }
        }
        else
        {
            if (!(i % 2))
            {
                insert_last(list, *(num + start++));
            }
            else
            {
                insert_last(list, *(num + end--));
            }
        }
    }
}

int main()
{
    SinglyLinkedList* mylist = createSinglyLinkedList();
    int n;
    scanf("%d", &n);
    int *num = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", num + i);
    }
    sorting(mylist, num, n);
    traverse(mylist);
    DataNode* current = mylist->head;
    while (current != NULL)
    {
        DataNode* temp = current;
        current = current->next;
        free(temp);
    }
    free(mylist);
    free(num);
    return 0;
}
