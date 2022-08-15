//
// Created by pcx on 8/15/2022.
//

#ifndef STUDENTS_MANAGEMENT_SOFTWARE_U_LIST_H
#define STUDENTS_MANAGEMENT_SOFTWARE_U_LIST_H
#include "studentsManagementSoftware/u_dataStruct.h"
#include "studentsManagementSoftware/u_dataBufferModule/u_node.h"


typedef studentNode_T           LIST_ELEMENT_TYPE_T;
typedef  student_T              LIST_DATA_TYPE_T;
typedef LIST_ELEMENT_TYPE_T*    LIST_ITERATOR_TYPE_T;

typedef  struct u_list
{
    LIST_ELEMENT_TYPE_T * beginElement;
    LIST_ELEMENT_TYPE_T *iterator;
} list_T;

void list_initList(list_T * listPtr, uint32_t numberOfElements);
_Bool list_empty(list_T *list_Ptr);
uint32_t  list_size(list_T *list_Ptr);
LIST_ELEMENT_TYPE_T *list_front(list_T *list_Ptr);
LIST_ELEMENT_TYPE_T *list_back(list_T *list_Ptr);

void list_insertFront(list_T* list_Ptr);
void list_insertBack(list_T* list_Ptr);

void list_insertFrontData(list_T* list_Ptr, LIST_DATA_TYPE_T newData);
void list_insertBackData(list_T* list_Ptr, LIST_DATA_TYPE_T newData);


void list_insert(list_T* list_Ptr, LIST_DATA_TYPE_T data, uint32_t positionOfElement);
void list_insert(list_T* list_Ptr, LIST_DATA_TYPE_T data, uint32_t positionOfElement, LIST_DATA_TYPE_T newData);

void list_pushFront(list_T *list_Ptr, LIST_DATA_TYPE_T data);
void list_pushBack(list_T *list_Ptr, LIST_DATA_TYPE_T data);
LIST_DATA_TYPE_T list_popFront(list_T *list_Ptr);
LIST_DATA_TYPE_T list_popBack(list_T *list_Ptr);
LIST_DATA_TYPE_T list_access(list_T *list_Ptr, uint32_t positionOfElement);
LIST_ELEMENT_TYPE_T* list_goToPos(list_T* list_Ptr, uint32_t positionOfElement);

LIST_ITERATOR_TYPE_T list_goToLastElement(list_T* list_Ptr);





#endif //STUDENTS_MANAGEMENT_SOFTWARE_U_LIST_H
