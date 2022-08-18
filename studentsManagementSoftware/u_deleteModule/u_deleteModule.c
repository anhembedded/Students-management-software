/**
  ******************************************************************************
  * @file    u_deleteModule.c
  * @author  TranHoangAnh
  * @brief
  *
  ==============================================================================
						##### DELETE MODULE #####
  ==============================================================================
  */


#include "u_deleteModule.h"
#include "stdlib.h"

static void delete_freeDataOfStringPtr(list_T *buffer, int32_t postOnBuffer)
{
	list_elementType_T *temp;
	temp = list_goToPos(buffer, postOnBuffer);
	free(temp->data.fullName);
	free(temp->data.homeTown);
	free(temp->data.department);
	free(temp->data.majors);
}

void delete_deleteStudent(list_T *buffer, int32_t postOnBuffer)
{
	delete_freeDataOfStringPtr(buffer, postOnBuffer);
	list_detele(buffer, postOnBuffer);
}
