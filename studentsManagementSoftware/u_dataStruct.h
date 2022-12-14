//
// Created by TranHoangAnh on 8/14/2022.
//

#ifndef STUDENTS_MANAGEMENT_SOFTWARE_U_DATASTRUCT_H
#define STUDENTS_MANAGEMENT_SOFTWARE_U_DATASTRUCT_H

#include <stdint.h>
#define INPUT_BUFFER_SIZE 50u

/*
typedef struct fullName {
    void * studentObjAddress;
    char * data;
} fullName_T;
typedef struct birthYear {
    void * studentObjAddress;
    uint32_t data;
}birthYear_T;
typedef struct department
{
    void * studentObjAddress;
    char * data;
} department_T;

typedef struct  homeTown
{
    void * studentObjAddress;
    char * data;
}  homeTown_T;

typedef struct  majors
{
    void * studentObjAddress;
    char * data;
} majors_T;

typedef struct cumulativeScore
{
    void * studentObjAddress;
    uint32_t data;
} cumulativeScore_T;

typedef struct entryScores
{
    void * studentObjAddress;
    uint32_t data;

} entryScores_T;
*/

typedef struct student
{
    uint32_t ID;
    char *fullName;
    uint32_t birthYear;
    char *department;
    char *homeTown;
    char *majors;
    uint32_t cumulativeScore;
    uint32_t entryScores;
} student_T;

typedef struct studentInputBuffer
{
    uint32_t ID;
    char fullName[INPUT_BUFFER_SIZE];
    uint32_t birthYear;
    char department[INPUT_BUFFER_SIZE];
    char homeTown[INPUT_BUFFER_SIZE];
    char majors[INPUT_BUFFER_SIZE];
    uint32_t cumulativeScore;
    uint32_t entryScores;
} studentInputBuffer_T;

#endif // STUDENTS_MANAGEMENT_SOFTWARE_U_DATASTRUCT_H
