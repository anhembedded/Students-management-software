#include <stdio.h>
#include "u_lib/common.h"
#include "studentsManagementSoftware/u_addModule/u_addModule.h"
#include "studentsManagementSoftware/u_dataStruct.h"
#include "studentsManagementSoftware/u_dataBufferModule/u_dataBufferModule.h"
#include "studentsManagementSoftware/u_dataBufferModule/u_node.h"

dataBuffer_heapNode_T *listHead;
dataBuffer_heapNode_T ob1;
dataBuffer_heapNode_T ob2;
dataBuffer_heapNode_T ob3;
dataBuffer_heapNode_T ob4;
dataBuffer_heapNode_T ob5;

student_T studentTestData[5];

int main() {
    studentTestData[0].ID = 0;
    studentTestData[1].ID = 1;
    studentTestData[2].ID = 2;
    studentTestData[3].ID = 3;
    studentTestData[4].ID = 4;

    studentTestData[0].birthYear = (birthYear_T){.studentObjAddress = &studentTestData[0],.data = 1990};
    studentTestData[1].birthYear = (birthYear_T){.studentObjAddress = &studentTestData[1],.data = 1991};
    studentTestData[2].birthYear = (birthYear_T){.studentObjAddress = &studentTestData[2],.data = 1992};
    studentTestData[3].birthYear = (birthYear_T){.studentObjAddress = &studentTestData[3],.data = 1993};
    studentTestData[4].birthYear = (birthYear_T){.studentObjAddress = &studentTestData[4],.data = 1994};

    studentTestData[0].fullName = (fullName_T){.studentObjAddress = &studentTestData[0], .data = "Zero"};
    studentTestData[1].fullName = (fullName_T){.studentObjAddress = &studentTestData[1], .data = "one"};
    studentTestData[2].fullName = (fullName_T){.studentObjAddress = &studentTestData[2], .data = "tow"};
    studentTestData[3].fullName = (fullName_T){.studentObjAddress = &studentTestData[3], .data = "three"};
    studentTestData[4].fullName = (fullName_T){.studentObjAddress = &studentTestData[4], .data = "f4"};

    ob1.next = &ob2;
    ob2.next = &ob3;
    ob3.next = &ob4;
    ob4.next = &ob5;
    ob5.next = NULL;

    ob1.data = studentTestData[0];
    ob2.data = studentTestData[1];
    ob3.data = studentTestData[2];
    ob4.data = studentTestData[3];
    ob5.data = studentTestData[4];


    initList(&listHead,&ob1 );
    list_traverse(&ob1);


    printf("Hello, World!\n");
    printf("This is Testing branch!\n");

    return 0;
}
