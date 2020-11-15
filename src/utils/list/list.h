//
// Created by raphael on 2020/11/15.
//

#ifndef LEARNC_LIST_H
#define LEARNC_LIST_H

#include "../../global.h"
#define INTERFACE 0
#define arraylist_iterate(l, index, item) \
        for (index = 0, item = l->body[0]; index < l->size; item = l->body[++index])

typedef struct arraylist {
    unsigned int size;
    unsigned int capacity;
    void **body;
} arraylist;



#endif //LEARNC_LIST_H
