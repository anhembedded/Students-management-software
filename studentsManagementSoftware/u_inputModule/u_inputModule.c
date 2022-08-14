//
// Created by pcx on 8/13/2022.
//

#include "u_inputModule.h"


void initStudent(student_T *obj, uint32_t ID, char *name, uint32_t birthYear) {

    obj->ID = ID;
    obj->birthYear.ID = ID;
    obj->birthYear.data = birthYear;
    obj->fullName.ID = ID;


}
