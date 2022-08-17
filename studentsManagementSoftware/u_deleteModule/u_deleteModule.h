//
// Created by pcx on 8/13/2022.
//

#ifndef STUDENTS_MANAGEMENT_SOFTWARE_U_DELETEMODULE_H
#define STUDENTS_MANAGEMENT_SOFTWARE_U_DELETEMODULE_H

#include "studentsManagementSoftware/u_dataStruct.h"
#include "studentsManagementSoftware/u_dataBufferModule/u_dataBufferModule.h"
#include "studentsManagementSoftware/u_addModule/u_addModule.h"
#include "studentsManagementSoftware/u_inputModule/u_inputModule.h"

static void delete_freeDataOfStringPtr(list_T *buffer, int32_t postOnBuffer);
void delete_deleteStudent(list_T *buffer, int32_t postOnBuffer);

#endif // STUDENTS_MANAGEMENT_SOFTWARE_U_DELETEMODULE_H
