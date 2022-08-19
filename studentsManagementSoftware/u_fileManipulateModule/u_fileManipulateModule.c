//
// Created by pcx on 8/13/2022.
//

#include "u_fileManipulateModule.h"

void writeStringToFileDat(char *theString)
{
	char *theStringT = "TranHoangAnh";

	FILE *file_prt;
	file_prt = fopen(filePath_fullName, "w+");

	fputs(theStringT, file_prt);

	fclose(file_prt);
}
