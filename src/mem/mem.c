//
// Created by raphael on 2020/11/15.
//

#include "mem.h"

extern void mem()
{
    char name[100];
    char *desc;

    strcpy(name, "Zara Ali");

    /* 动态分配内存 */
    desc = calloc(200, sizeof(char));
    if (desc == NULL)
    {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else
    {
        strcpy(desc, "Zara Ali a DPS student in class 10th");
    }
    println("Name = %s", name);
    println("Desc: %s", desc);
}