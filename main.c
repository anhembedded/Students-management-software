

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
LIST_ITERATOR_TYPE_T iter;

// JUST a Test Function
void init()
{

   studentTestData[0].fullName = "Tran Bich Tuyen";
   studentTestData[1].fullName = "Nguyen Viet Nga";
   studentTestData[2].fullName = "Le Thu Trinh";
   studentTestData[3].fullName = "Kim Kim Thoai";
   studentTestData[4].fullName = "Vo Thanh Sang";

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

   studentTestData[0].department = "Co Khi";
   studentTestData[1].department = "Dien Tu";
   studentTestData[2].department = "Kinh Te";
   studentTestData[3].department = "Xay dung";
   studentTestData[4].department = "May";

   studentTestData[0].majors = "Toan Tin";
   studentTestData[1].majors = "Dieu Khien";
   studentTestData[2].majors = "Cong Nghiep";
   studentTestData[3].majors = "Nha May";
   studentTestData[4].majors = "Hien Dai";

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
   iter = list_back(&mainBuffer);
   watchData = list_size(&mainBuffer);

   for (int i = 0; i <= 4; i++)
   {
      add_addStudentData(&mainBuffer, &studentTestData[i]);
      watchData = list_size(&mainBuffer);
      iter = list_back(&mainBuffer);
   }
}

int main()
{
    //cmt
   init();
   watchData = list_size(&mainBuffer);
   menu_mainMenu(&mainBuffer, &sreachBuffer);

   return 0;
}

