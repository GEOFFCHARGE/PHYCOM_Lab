// Quiz 08-02: Linked List

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct DataNode
{
    char *data;
    struct DataNode *next;
} DataNode;

typedef struct SinglyLinkedList
{
    unsigned int count;
    DataNode *head;
} SinglyLinkedList;

DataNode* createDataNode(char *data)
{
    DataNode *newNode = (DataNode*) malloc(sizeof(DataNode));
    newNode->data = (char*) malloc(strlen(data) + 1);
    strcpy(newNode->data, data);
    newNode->next = NULL;
    return newNode;
}

SinglyLinkedList* createSinglyLinkedList()
{
    SinglyLinkedList *newList = (SinglyLinkedList*) malloc(sizeof(SinglyLinkedList));
    newList->count = 0;
    newList->head = NULL;
    return newList;
}

void insert_last(SinglyLinkedList* list, char *data)
{
    DataNode *node = createDataNode(data);
    if (!list->head)
    {
        list->head = node;
    } else
    {
        DataNode *ptr = list->head;
        while (ptr->next) ptr = ptr->next;
        ptr->next = node;
    }
    list->count++;
}

void traverseIndex(SinglyLinkedList *list, int index)
{
    int digit = 1;
    DataNode *ptr = list->head;
    if (index > list->count || index < 1)
    { 
        printf("Error");
        return;
    }
    while (ptr->data != NULL)
    {
        if (digit++ == index)
        {
            printf("%s", ptr->data);
            return;
        }
        ptr = ptr->next;
    }
}

int main()
{
    SinglyLinkedList *list = createSinglyLinkedList();
    char name[101];
    int index;
    while (1)
    {
        scanf(" %[^\n]", name);
        if (!strcmp(name, "Last"))
            break;
        insert_last(list, name);
    }

    scanf(" %d", &index);

    traverseIndex(list, index);

    DataNode *ptr = list->head;
    while(ptr)
    {
        free(ptr->data);
        DataNode *temp = ptr;
        ptr = ptr->next;
        free(temp);
    }
    free(list);
    return 0;
}
