#include <stdio.h>
#include "u_lib/common.h"
#include "studentsManagementSoftware/u_addModule/u_addModule.h"
#include "studentsManagementSoftware/u_dataStruct.h"
#include "studentsManagementSoftware/u_dataBufferModule/u_dataBufferModule.h"
#include "studentsManagementSoftware/u_dataBufferModule/u_node.h"
#include "studentsManagementSoftware/u_dataBufferModule/u_list.h"
#include "string.h"

dataBuffer_heapNode_T *listHead;
dataBuffer_heapNode_T ob1;
dataBuffer_heapNode_T ob2;
dataBuffer_heapNode_T ob3;
dataBuffer_heapNode_T ob4;
dataBuffer_heapNode_T ob5;

student_T studentTestData[5];

list_T  myBuffer;
LIST_ELEMENT_TYPE_T * iterator;


uint32_t varWatch;
studentNode_T A;

int main() {


    list_initList(&myBuffer, 1);
    varWatch = list_size(&myBuffer);
    
    //list_insertBack(&myBuffer);
    varWatch = list_size(&myBuffer);


    printf("Hello, World!\n");
    printf("This is Testing branch!\n");

    return 0;
}
