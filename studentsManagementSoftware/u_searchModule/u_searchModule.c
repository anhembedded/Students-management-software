//
// Created by pcx on 8/13/2022.
//

#include "u_searchModule.h"

list_T sreach_buffer;

void sreach_sreachString(list_T* bufferData, list_T* bufferSreach, char* theString)
{
	uint32_t  sizeOfBuffer = list_size(bufferData);
	for (int32_t i = 0; i < sizeOfBuffer; ++i)
	{
		if (strstr(list_goToPos(bufferData, i)->data.fullName, theString))
		{
			list_pushBack(bufferData,list_goToPos(bufferData, i)->data);
		}
		
	}
}
