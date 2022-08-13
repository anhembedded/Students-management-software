//
// Created by TranHoangAnh on 8/14/2022.
//

#ifndef STUDENTS_MANAGEMENT_SOFTWARE_U_DATASTRUCT_H
#define STUDENTS_MANAGEMENT_SOFTWARE_U_DATASTRUCT_H

#include <stdint.h>

typedef struct fullName {
    uint32_t ID;
    char * data;
} fullName_T;




typedef struct student
{
    uint32_t ID;
    fullName_T fullName;

}student_T;



#endif //STUDENTS_MANAGEMENT_SOFTWARE_U_DATASTRUCT_H
