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
typedef struct birthYear {
    uint32_t ID;
    uint32_t data;
}birthYear_T;
typedef struct department
{
    uint32_t ID;
    char * data;
} department_T;

typedef struct  homeTown
{
    uint32_t ID;
    char * data;
}  homeTown_T;


typedef struct  majors
{
    uint32_t ID;
    char * data;
} majors_T;

typedef struct cumulativeScore
{
    uint32_t ID;
    uint32_t data;
} cumulativeScore_T;

typedef struct entryScores
{
    uint32_t ID;
    uint32_t data;

} entryScores_T;


typedef struct student
{
    uint32_t ID;
    fullName_T fullName;
    birthYear_T birthYear;
    department_T department;
    homeTown_T homeTown_T;
    majors_T  majors;
    cumulativeScore_T cumulativeScore;
    entryScores_T entryScores;

    
}student_T;



#endif //STUDENTS_MANAGEMENT_SOFTWARE_U_DATASTRUCT_H
