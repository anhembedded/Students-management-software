//
// Created by pcx on 8/13/2022.
//

#include "u_searchModule.h"

list_T sreach_buffer;

// Just A test Function
void sreach_sreachString(list_T *bufferData, list_T *bufferSreach, char *theString)
{
	list_clearAllNode(bufferSreach);
	uint32_t sizeOfBuffer = list_size(bufferData);
	for (int32_t i = 0; i < sizeOfBuffer; ++i)
	{
		if (strstr(list_goToPos(bufferData, i)->data.fullName, theString))
		{
			list_pushBack(bufferSreach, list_goToPos(bufferData, i)->data);
		}
	}
}

void sreach_sreach_fullName(list_T *bufferData, list_T *bufferSreach, char *theString)
{
	list_clearAllNode(bufferSreach);
	uint32_t sizeOfBuffer = list_size(bufferData);
	for (int32_t i = 0; i < sizeOfBuffer; ++i)
	{
		if (strstr(list_goToPos(bufferData, i)->data.fullName, theString))
		{
			list_pushBack(bufferSreach, list_goToPos(bufferData, i)->data);
		}
	}
}

void sreach_sreach_department(list_T *bufferData, list_T *bufferSreach, char *theString)
{
	list_clearAllNode(bufferSreach);
	uint32_t sizeOfBuffer = list_size(bufferData);
	for (int32_t i = 0; i < sizeOfBuffer; ++i)
	{
		if (strstr(list_goToPos(bufferData, i)->data.department, theString))
		{
			list_pushBack(bufferSreach, list_goToPos(bufferData, i)->data);
		}
	}
}

void sreach_sreach_majors(list_T *bufferData, list_T *bufferSreach, char *theString)
{
	list_clearAllNode(bufferSreach);
	uint32_t sizeOfBuffer = list_size(bufferData);
	for (int32_t i = 0; i < sizeOfBuffer; ++i)
	{
		if (strstr(list_goToPos(bufferData, i)->data.majors, theString))
		{
			list_pushBack(bufferSreach, list_goToPos(bufferData, i)->data);
		}
	}
}

void sreach_sreach_homeTown(list_T *bufferData, list_T *bufferSreach, char *theString)
{
	list_clearAllNode(bufferSreach);
	uint32_t sizeOfBuffer = list_size(bufferData);
	for (int32_t i = 0; i < sizeOfBuffer; ++i)
	{
		if (strstr(list_goToPos(bufferData, i)->data.homeTown, theString))
		{
			list_pushBack(bufferSreach, list_goToPos(bufferData, i)->data);
		}
	}
}

void sreach_sreach_birthYear(list_T *bufferData, list_T *bufferSreach, uint32_t numberSreach) {
    list_clearAllNode(bufferSreach);
    uint32_t sizeOfBuffer = list_size(bufferData);
    for(uint32_t  i=0; i<sizeOfBuffer; i++)
    {

        if(list_goToPos(bufferData,i)->data.birthYear == numberSreach)
        {
            list_pushBack(bufferSreach, list_goToPos(bufferData, i)->data);
        }
    }
}

void sreach_sreach_cumulativeScore(list_T *bufferData, list_T *bufferSreach, uint32_t numberSreach) {
    list_clearAllNode(bufferSreach);
    uint32_t sizeOfBuffer = list_size(bufferData);
    for(uint32_t  i=0; i<sizeOfBuffer; i++)
    {

        if(list_goToPos(bufferData,i)->data.cumulativeScore == numberSreach)
        {
            list_pushBack(bufferSreach, list_goToPos(bufferData, i)->data);
        }
    }
}

void sreach_sreach_entryScores(list_T *bufferData, list_T *bufferSreach, uint32_t numberSreach) {
    list_clearAllNode(bufferSreach);
    uint32_t sizeOfBuffer = list_size(bufferData);
    for(uint32_t  i=0; i<sizeOfBuffer; i++)
    {

        if(list_goToPos(bufferData,i)->data.entryScores == numberSreach)
        {
            list_pushBack(bufferSreach, list_goToPos(bufferData, i)->data);
        }
    }
}
