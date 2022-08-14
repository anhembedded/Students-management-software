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

void insertAfter(dataBuffer_heapNode_T *prev_node, student_T new_data) {
    if (prev_node == NULL) {
        printf("the given previous node cannot be NULL");
        return;
    }
    dataBuffer_heapNode_T* new_node = (dataBuffer_heapNode_T*)malloc(sizeof(dataBuffer_heapNode_T));
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void insertAtEnd(dataBuffer_heapNode_T **head_ref, student_T new_data) {
    dataBuffer_heapNode_T* new_node = (dataBuffer_heapNode_T*)malloc(sizeof(dataBuffer_heapNode_T));
    dataBuffer_heapNode_T* last = *head_ref; /* used in step 5*/
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL) last = last->next;
    last->next = new_node;
}

void deleteNode(dataBuffer_heapNode_T **head_ref, uint32_t student_T_ID) {
    dataBuffer_heapNode_T *temp = *head_ref, *prev;
    if (temp != NULL && temp->data.ID == student_T_ID) {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    // Find the key to be deleted
    while (temp != NULL && temp->data.ID != student_T_ID) {
        prev = temp;
        temp = temp->next;
    }
    // If the key is not present
    if (temp == NULL) return;
    // Remove the node
    prev->next = temp->next;
    free(temp);
}


