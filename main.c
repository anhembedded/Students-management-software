#include <stdio.h>
#include "u_lib/common.h"
#include "studentsManagementSoftware/u_addModule/u_addModule.h"
#include "studentsManagementSoftware/u_dataStruct.h"
#include "studentsManagementSoftware/u_dataBufferModule/u_dataBufferModule.h"
#include "studentsManagementSoftware/u_dataBufferModule/u_node.h"
#include "studentsManagementSoftware/u_dataBufferModule/u_list.h"
#include "studentsManagementSoftware/u_displayModule/u_displayModule.h"
#include "studentsManagementSoftware/u_dataBufferModule/u_dataBufferModule.h"
#include "studentsManagementSoftware/u_sortModule/u_sortModule.h"
#include "stdlib.h"



student_T studentTestData[10];
void init()
{
    studentTestData[0].fullName = "Bich Tuyen";
    studentTestData[1].fullName = "Viet Nga";
    studentTestData[2].fullName = "Thu Trinh";
    studentTestData[3].fullName = "Kim Thoai";
    studentTestData[4].fullName = "Thanh Sang";

    studentTestData[0].cumulativeScore = 32;
    studentTestData[1].cumulativeScore = 133;
    studentTestData[2].cumulativeScore = 24;
    studentTestData[3].cumulativeScore = 234;
    studentTestData[4].cumulativeScore = 4;

    studentTestData[0].homeTown = "Long An";
    studentTestData[1].homeTown = "Hai Phong";
    studentTestData[2].homeTown = "HCM";
    studentTestData[3].homeTown = "Ha Noi";
    studentTestData[4].homeTown = "Bac Can";

    studentTestData[0].department = "[BT].department";
    studentTestData[1].department = "[VN].department";
    studentTestData[2].department = "[TK].department";
    studentTestData[3].department = "[TTR].department";
    studentTestData[4].department = "[TS].department";

    studentTestData[0].majors = "[BT].majors";
    studentTestData[1].majors = "[VN].majors";
    studentTestData[2].majors = "[TTR].majors";
    studentTestData[3].majors = "[KT].majors";
    studentTestData[4].majors = "[TS].majors";

    studentTestData[0].entryScores = 23;
    studentTestData[1].entryScores = 22;
    studentTestData[2].entryScores = 2;
    studentTestData[3].entryScores = 43;
    studentTestData[4].entryScores = 12;

    studentTestData[0].birthYear = 1999;
    studentTestData[1].birthYear = 1997;
    studentTestData[2].birthYear = 1996;
    studentTestData[3].birthYear = 1993;
    studentTestData[4].birthYear = 2002;


}

list_T  myBuffer;
LIST_ELEMENT_TYPE_T * iterator;


uint32_t varWatch;
node_T A;

int main() {

    init();

    list_initList(&myBuffer, 5);

    for (int i = 0; i <=4 ;i ++)
    {
        list_goToPos(&myBuffer,i)->data = studentTestData[i];
    }


    sort_incr_majors(&myBuffer);

     printAllBuffer_student(&myBuffer);



  printf("Hello, World!\n");
  printf("This is Testing branch!\n");

    return 0;
}
