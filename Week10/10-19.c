// Lab 10-19 Linked List - Indexing

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct DataNode
{
    char* data;
    struct DataNode* next;
} DataNode;

typedef struct SinglyLinkedList
{
    unsigned int count;
    DataNode* head;
} SinglyLinkedList;

DataNode* createDataNode(char* data)
{
    DataNode* newNode = (DataNode*) malloc(sizeof(DataNode));
    newNode->data = (char*) malloc(strlen(data) + 1);
    strcpy(newNode->data, data);
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

void insert_last(SinglyLinkedList* list, char* data)
{
    DataNode* pNew = createDataNode(data);
    if (list->count == 0) 
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

void searchIndex(SinglyLinkedList* list, int index)
{
    int temp = 0;
    struct DataNode* pointer = list->head;
    while (pointer != NULL)
    {
        if (temp++ == index)
        {
            printf("%s", pointer->data);
            return;
        }
        pointer = pointer->next;
    }
    printf("Error");
}

int main()
{
    SinglyLinkedList* mylist = createSinglyLinkedList();
    char *food = malloc(21 * sizeof(char));
    while (1)
    {
        scanf(" %s", food);
        if (!strcmp(food, "Last"))
        {
            break;
        }
        insert_last(mylist, food);
    }
    int index;
    scanf("%d", &index);
    if (index < 0)
    {
        index += mylist->count;
    }
    searchIndex(mylist, index);
    DataNode* current = mylist->head;
    while (current != NULL)
    {
        free(current->data);
        DataNode* temp = current;
        current = current->next;
        free(temp);
    }
    free(mylist);
    free(food);
    return 0;
}
