//
// Created by pcx on 8/14/2022.
//

#ifndef STUDENTS_MANAGEMENT_SOFTWARE_U_DATABUFFERMODULE_H
#define STUDENTS_MANAGEMENT_SOFTWARE_U_DATABUFFERMODULE_H
#include "studentsManagementSoftware/u_dataStruct.h"
#include "studentsManagementSoftware/u_dataBufferModule/u_list.h"

typedef list_T buffer_T;

void buffer_Init(buffer_T *bf_ptr);

uint32_t buffer_size(buffer_T *bf);

#endif // STUDENTS_MANAGEMENT_SOFTWARE_U_DATABUFFERMODULE_H
