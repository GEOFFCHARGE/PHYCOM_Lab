// [Mock Exam] Linked List - Traversal and Insert Last (ให้ลองทำเองดู อย่าเอาโค้ดเก่ามาส่ง)

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

DataNode *createDataNode(char *data)
{
    DataNode *newNode = calloc(1, sizeof(DataNode));
    newNode->data = calloc(strlen(data), sizeof(char));
    strcpy(newNode->data, data);
    newNode->next = NULL;
    return newNode;
}

SinglyLinkedList *createSinglyLinkedList()
{
    SinglyLinkedList *newList = calloc(1, sizeof(SinglyLinkedList));
    newList->count = 0;
    newList->head = NULL;
    return newList;
}

void traverse(SinglyLinkedList *list)
{
    if (list->count == 0)
    {
        printf("This is an empty list.\n");
    }
    else
    {
        DataNode *pointer = list->head;
        while (pointer->next != NULL)
        {
            printf("%s -> ", pointer->data);
            pointer = pointer->next;
        }
        printf("%s\n", pointer->data);
    }
}

void insert_front(SinglyLinkedList *list, char *data)
{
    DataNode *pNew = createDataNode(data);
    if (list->count == 0)
    {
        list->head = pNew;
    }
    else
    {
        pNew->next = list->head;
        list->head = pNew;
    }
    list->count++;
}

void insert_last(SinglyLinkedList *list, char *data)
{
    DataNode *pNew = createDataNode(data);
    if (list->count == 0)
    {
        list->head = pNew;
    }
    else
    {
        DataNode *pointer = list->head;
        while (pointer->next != NULL)
        {
            pointer = pointer->next;
        }
        pointer->next = pNew;
    }
    list->count++;
}

void delete(SinglyLinkedList *list, char *data)
{
    if (list->count == 0)
    {
        printf("Cannot delete, %s does not exist.\n", data);
    }
    else
    {
        DataNode *pointer = list->head;
        DataNode *previos = NULL;
        while (pointer != NULL)
        {
            if (!strcmp(pointer->data, data))
            {
                if (pointer == list->head)
                {
                    list->head = pointer->next;
                }
                else
                {
                    previos->next = pointer->next;
                }
                free(pointer->data);
                free(pointer);
                list->count--;
                return;
            }
            previos = pointer;
            pointer = pointer->next;
        }
        printf("Cannot delete, %s does not exist.\n", data);
    }
}

int main()
{
    SinglyLinkedList *myList = createSinglyLinkedList();
    int n;
    char condition, data[101];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %c: %[^\n]s", &condition, data);
        if (condition == 'F')
        {
            insert_front(myList, data);
        }
        else if (condition == 'L')
        {
            insert_last(myList, data);
        }
        else if (condition == 'D')
        {
            delete(myList, data);
        }
        else
        {
            printf("Invalid Condition!\n");
        }
    }
    traverse(myList);
    DataNode *current = myList->head;
    while (current != NULL)
    {
        free(current->data);
        DataNode *temp = current;
        current = current->next;
        free(temp);
    }
    free(myList);
    return 0;
}
