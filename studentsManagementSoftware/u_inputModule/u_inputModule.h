/**
  ******************************************************************************
  * @file    u_inputModule.h
  * @author  TranHoangAnh
  * @brief
  *
  ==============================================================================
						##### INPUT MODULE #####
  ==============================================================================
  */

#ifndef STUDENTS_MANAGEMENT_SOFTWARE_U_INPUTMODULE_H
#define STUDENTS_MANAGEMENT_SOFTWARE_U_INPUTMODULE_H
#include "studentsManagementSoftware/u_dataStruct.h"
#include "studentsManagementSoftware/u_dataBufferModule/u_dataBufferModule.h"
#include <stdio.h>




studentInputBuffer_T input_NhapSinhVien();
student_T input_allocateData(studentInputBuffer_T *stdBuffer_ptr);
student_T input_allocateDataStudent_T(student_T* std_ptr);




#endif //STUDENTS_MANAGEMENT_SOFTWARE_U_INPUTMODULE_H
