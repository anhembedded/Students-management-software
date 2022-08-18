/**
  ******************************************************************************
  * @file    u_addModule.c
  * @author  TranHoangAnh
  * @brief  
  *
  ==============================================================================
						##### ADD MODULE #####
  ==============================================================================
  */

#include "u_addModule.h"
#include "studentsManagementSoftware/u_inputModule/u_inputModule.h"

/**
  * @brief  Add a student to Buffer via console.
  * @param  buffer			pointer to the Buffer
  * @retval void
  */
void add_addStudent(list_T *buffer)
{
	studentInputBuffer_T studentInputBufferTemp;
	student_T studenTemp;
	studentInputBufferTemp = input_NhapSinhVien();
	studenTemp = input_allocateData(&studentInputBufferTemp);
	list_pushBack(buffer, studenTemp);
}

/**
  * @brief	Add a student to Buffer via pointer to student_T Object
  * @param  buffer			pointer to the Buffer 
  * @param  newStudent		pointer to the student_T object
  * @code
  * @retval void
  */
void add_addStudentData(list_T *buffer, student_T *newStudent)
{
	student_T studenTemp;
	studenTemp = input_allocateDataStudent_T(newStudent);
	list_pushBack(buffer, studenTemp);
}
