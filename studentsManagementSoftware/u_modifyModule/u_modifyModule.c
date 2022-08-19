//
// Created by pcx on 8/13/2022.
//

#include "u_modifyModule.h"

void modify_modifyStudent(list_T *buffer, int32_t positions)
{
	studentInputBuffer_T studentInputBufferTemp;
	student_T studentemp;
	studentInputBufferTemp = input_NhapSinhVien();
	studentemp = input_allocateData(&studentInputBufferTemp);
	list_goToPos(buffer, positions)->data = studentemp;
}
