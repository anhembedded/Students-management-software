//
// Created by pcx on 8/15/2022.
//

#ifndef STUDENTS_MANAGEMENT_SOFTWARE_U_LIST_H
#define STUDENTS_MANAGEMENT_SOFTWARE_U_LIST_H
#include "studentsManagementSoftware/u_dataStruct.h"
#include "studentsManagementSoftware/u_dataBufferModule/u_node.h"

typedef node_T LIST_ELEMENT_TYPE_T;
typedef node_dataType_T LIST_DATA_TYPE_T;
typedef LIST_ELEMENT_TYPE_T *LIST_ITERATOR_TYPE_T;

typedef struct u_list
{
    LIST_ELEMENT_TYPE_T *beginElement;
} list_T;

void list_init(list_T *listPtr);
void list_initList(list_T *listPtr, int32_t numberOfElements);
_Bool list_empty(list_T *list_Ptr);
uint32_t list_size(list_T *list_Ptr);
void list_clearAllNode(list_T *list_Ptr);

void list_insert(list_T *list_Ptr, int32_t positionOfElement);
void list_insertData(list_T *list_Ptr, LIST_DATA_TYPE_T data, int32_t positionOfElement);
void list_detele(list_T *list_Ptr, int32_t positionOfElement);
void list_pushFront(list_T *list_Ptr, LIST_DATA_TYPE_T data);
void list_pushBack(list_T *list_Ptr, LIST_DATA_TYPE_T data);
void list_swap(list_T *list_Ptr, int32_t posA, int32_t posB);
LIST_DATA_TYPE_T list_popFront(list_T *list_Ptr);
LIST_DATA_TYPE_T list_popBack(list_T *list_Ptr);
LIST_DATA_TYPE_T list_access(list_T *list_Ptr, int32_t positionOfElement);
LIST_ELEMENT_TYPE_T *list_goToPos(list_T *list_Ptr, int32_t positionOfElement);

static LIST_ELEMENT_TYPE_T *list_front(list_T *list_Ptr);
LIST_ELEMENT_TYPE_T *list_back(list_T *list_Ptr);
static void list_insertFront(list_T *list_Ptr);
static void list_insertBack(list_T *list_Ptr);
static void list_insertFrontData(list_T *list_Ptr, LIST_DATA_TYPE_T newData);
static void list_insertBackData(list_T *list_Ptr, LIST_DATA_TYPE_T newData);
static LIST_ITERATOR_TYPE_T list_goToLastElement(list_T *list_Ptr);

#endif // STUDENTS_MANAGEMENT_SOFTWARE_U_LIST_H
