//
// Created by pcx on 8/13/2022.
//

#ifndef STUDENTS_MANAGEMENT_SOFTWARE_U_MODIFYMODULE_H
#define STUDENTS_MANAGEMENT_SOFTWARE_U_MODIFYMODULE_H
#include "studentsManagementSoftware/u_dataStruct.h"
#include "studentsManagementSoftware/u_dataBufferModule/u_dataBufferModule.h"
#include "studentsManagementSoftware/u_addModule/u_addModule.h"
#include "studentsManagementSoftware/u_inputModule/u_inputModule.h"

void modify_modifyFullName(list_T* buffer, int32_t positions);
void modify_modifyBirthYear(list_T* buffer, int32_t positions);
void modify_modifyHomeTown(list_T* buffer, int32_t positions);
void modify_modifyDepartment(list_T* buffer, int32_t positions);
void modify_modifyMajor(list_T* buffer, int32_t positions);
void modify_modifyEntryScore(list_T* buffer, int32_t positions);
void modify_modifyCumulativeScore(list_T* buffer, int32_t positions);
#endif // STUDENTS_MANAGEMENT_SOFTWARE_U_MODIFYMODULE_H
