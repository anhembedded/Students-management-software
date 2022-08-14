//
// Created by pcx on 8/14/2022.
//

#ifndef STUDENTS_MANAGEMENT_SOFTWARE_U_DATABUFFERMODULE_H
#define STUDENTS_MANAGEMENT_SOFTWARE_U_DATABUFFERMODULE_H
#include "studentsManagementSoftware/u_dataStruct.h"

extern student_T dataBuffer[];
extern fullName_T fullNameBuffer_ptr[];
typedef struct st_Name
{
    char m_name[50];
}st_Name_T;

extern st_Name_T fullNameBuffer_data[1000];

#endif //STUDENTS_MANAGEMENT_SOFTWARE_U_DATABUFFERMODULE_H
