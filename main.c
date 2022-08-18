
/*
 * Created on Wed Aug 17 2022
 *
 *
 */

#include "main.h"

student_T studentTestData[10];
list_T mainBuffer;
list_T sreachBuffer;
uint32_t watchData;
list_iteratorType_T iter;
// JUST a Test Function


void init()
{
   studentTestData[0].fullName = "Bich Tuyen";
   studentTestData[1].fullName = "Viet Nga";
   studentTestData[2].fullName = "Thu Trinh";
   studentTestData[3].fullName = "Kim Thoai";
   studentTestData[4].fullName = "Thanh Sang";

   studentTestData[0].cumulativeScore = 32;
   studentTestData[1].cumulativeScore = 133;
   studentTestData[2].cumulativeScore = 24;
   studentTestData[3].cumulativeScore = 234;
   studentTestData[4].cumulativeScore = 4;

   studentTestData[0].homeTown = "Long An";
   studentTestData[1].homeTown = "Hai Phong";
   studentTestData[2].homeTown = "HCM";
   studentTestData[3].homeTown = "Ha Noi";
   studentTestData[4].homeTown = "Bac Can";

   studentTestData[0].department = "[BT].department";
   studentTestData[1].department = "[VN].department";
   studentTestData[2].department = "[TT].department";
   studentTestData[3].department = "[KT].department";
   studentTestData[4].department = "[TS].department";

   studentTestData[0].majors = "[BT].majors";
   studentTestData[1].majors = "[VN].majors";
   studentTestData[2].majors = "[TT].majors";
   studentTestData[3].majors = "[KT].majors";
   studentTestData[4].majors = "[TS].majors";

   studentTestData[0].entryScores = 23;
   studentTestData[1].entryScores = 22;
   studentTestData[2].entryScores = 2;
   studentTestData[3].entryScores = 43;
   studentTestData[4].entryScores = 12;

   studentTestData[0].birthYear = 2003;
   studentTestData[1].birthYear = 1997;
   studentTestData[2].birthYear = 1996;
   studentTestData[3].birthYear = 2005;
   studentTestData[4].birthYear = 2009;

   list_initList(&mainBuffer, 0);
   list_initList(&sreachBuffer, 0);
  
   watchData = list_size(&mainBuffer);

   for (int i = 0; i <= 4; i++)
   {
      add_addStudentData(&mainBuffer, &studentTestData[i]);
      watchData = list_size(&mainBuffer);
   }
}

int main()
{
   init();
   watchData = list_size(&mainBuffer);
   menu_mainMenu(&mainBuffer, &sreachBuffer);

   return 0;
}

