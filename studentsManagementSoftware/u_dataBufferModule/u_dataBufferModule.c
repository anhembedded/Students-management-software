//
// Created by pcx on 8/14/2022.
//

#include "u_dataBufferModule.h"
#include "stdlib.h"






studentInputBuffer_T inputBuffer_T;

void buffer_Init(buffer_T* bf_ptr){

        list_initList(bf_ptr, 6);

}


uint32_t buffer_size(buffer_T *bf) {
    return   list_size(bf);;
}


