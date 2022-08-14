//
// Created by pcx on 8/14/2022.
//

#ifndef STUDENTS_MANAGEMENT_SOFTWARE_U_NODE_H
#define STUDENTS_MANAGEMENT_SOFTWARE_U_NODE_H
#include "studentsManagementSoftware/u_dataStruct.h"

typedef struct dataBuffer_HeapNode
{
    student_T data;
    struct dataBuffer_HeapNode *next;
}dataBuffer_heapNode_T;

void initList(dataBuffer_heapNode_T **listPtr, dataBuffer_heapNode_T *head);
void list_traverse(dataBuffer_heapNode_T *headNode);
void insertAfter(dataBuffer_heapNode_T* prev_node, student_T new_data);
void insertAtEnd(dataBuffer_heapNode_T** head_ref, student_T new_data);
void deleteNode( dataBuffer_heapNode_T** head_ref, uint32_t student_T_ID);


void insertAtBeginning( dataBuffer_heapNode_T** head_ref, student_T new_data);
void list_deleteFromBegin(dataBuffer_heapNode_T * headNode);
void list_deleteFromEnd(dataBuffer_heapNode_T * headNode);




#endif //STUDENTS_MANAGEMENT_SOFTWARE_U_NODE_H
