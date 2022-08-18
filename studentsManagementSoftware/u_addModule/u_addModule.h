/**
  ******************************************************************************
  * @file    u_addModule.h
  * @author  TranHoangAnh
  * @brief
  *
  ==============================================================================
						##### ADD MODULE #####
  ==============================================================================
  */
#ifndef STUDENTS_MANAGEMENT_SOFTWARE_U_ADDMODULE_H
#define STUDENTS_MANAGEMENT_SOFTWARE_U_ADDMODULE_H
#include "studentsManagementSoftware/u_dataBufferModule/u_dataBufferModule.h"

 
void add_addStudent(list_T *buffer);
void add_addStudentData(list_T *buffer, student_T *newStudent);

#endif // STUDENTS_MANAGEMENT_SOFTWARE_U_ADDMODULE_H
