//
// Created by pcx on 8/13/2022.
//

#include "u_addModule.h"
#include "studentsManagementSoftware/u_inputModule/u_inputModule.h"

void add_addStudent(list_T *buffer)
{
	studentInputBuffer_T studentInputBufferTemp;
	student_T studentemp;

	studentInputBufferTemp = input_NhapSinhVien();
	studentemp = input_allocateData(&studentInputBufferTemp);

	list_pushBack(buffer, studentemp);
}

void add_addStudentData(list_T *buffer, student_T *newStudent)
{
	student_T studentemp;
	studentemp = input_allocateDataStudent_T(newStudent);
	list_pushBack(buffer, studentemp);
}
