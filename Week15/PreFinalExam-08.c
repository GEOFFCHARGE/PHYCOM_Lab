// [Mock Exam] Link List

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct DataNode
{
    unsigned int index;
    char *data;
    struct DataNode *next;
} DataNode;

typedef struct SinglyLinkedList
{
    unsigned int count;
    DataNode *head;
} SinglyLinkedList;

DataNode *createDataNode(int index, char *data)
{
    DataNode *newNode = calloc(1, sizeof(DataNode));
    newNode->index = index;
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
            printf("%s ", pointer->data);
            pointer = pointer->next;
        }
        printf("%s\n", pointer->data);
    }
}

void insert_last(SinglyLinkedList *list, int index, char *data)
{
    DataNode *pNew = createDataNode(index, data);
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

void insert_before(SinglyLinkedList *list, int index, char *data)
{
	if (index == list->count)
	{
		insert_last(list, index, data);
		return;
	}
    DataNode *pNew = createDataNode(index, data);
    DataNode *pointer = list->head;
    DataNode *previos = NULL;
    while (pointer != NULL)
    {
        if (pointer->index == index)
        {
            if (pointer == list->head)
            {
                pNew->next = pointer;
                list->head = pNew;
            }
            else
            {
                previos->next = pNew;
                pNew->next = pointer;
            }
            list->count++;
            break;
        }
        previos = pointer;
        pointer = pointer->next;
    }
}

int main()
{
    SinglyLinkedList *myList = createSinglyLinkedList();
    int n;
    char data[101];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %[^\n]", data);
        insert_last(myList, i, data);
    }
    scanf(" %d\n %[^\n]", &n, data);
    insert_before(myList, n, data);
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
