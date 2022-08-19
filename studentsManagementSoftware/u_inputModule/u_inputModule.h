//
// Created by pcx on 8/13/2022.
//

#ifndef STUDENTS_MANAGEMENT_SOFTWARE_U_INPUTMODULE_H
#define STUDENTS_MANAGEMENT_SOFTWARE_U_INPUTMODULE_H
#include "studentsManagementSoftware/u_dataStruct.h"
#include "studentsManagementSoftware/u_dataBufferModule/u_dataBufferModule.h"
#include <stdio.h>

studentInputBuffer_T input_NhapSinhVien();
student_T input_allocateData(studentInputBuffer_T *stdBuffer_ptr);
student_T input_allocateDataStudent_T(student_T* std_ptr);

void input_fullName(studentInputBuffer_T*);
void input_birthYear(studentInputBuffer_T*);
void input_homeTown(studentInputBuffer_T*);
void input_department(studentInputBuffer_T*);
void input_major(studentInputBuffer_T*);
void input_entryScore(studentInputBuffer_T*);
void input_cumulativeScore(studentInputBuffer_T*);

char* input_stringAllocate(char* string);

#endif //STUDENTS_MANAGEMENT_SOFTWARE_U_INPUTMODULE_H
