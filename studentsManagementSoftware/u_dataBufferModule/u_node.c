//
// Created by pcx on 8/14/2022.
//

#include "u_node.h"
#include "stdio.h"
#include "stdlib.h"


void initList(dataBuffer_heapNode_T **listPtr, dataBuffer_heapNode_T *head) {
    listPtr = &head;
}

void insertAtBeginning(dataBuffer_heapNode_T **head_ref, student_T new_data) {
    // Allocate memory to a node
    dataBuffer_heapNode_T* new_node = (dataBuffer_heapNode_T*)malloc(sizeof(dataBuffer_heapNode_T));
    // insert the data
    new_node->data = new_data;
    new_node->next = (*head_ref);
    // Move head to new node
    (*head_ref) = new_node;
}

void list_traverse(dataBuffer_heapNode_T *headNode) {
    dataBuffer_heapNode_T *temp = headNode;
    printf("\n\nList elements are - \n");
    while(temp != NULL) {
        printf("%d --->",temp->data.ID);
        temp = temp->next;
    }
}

