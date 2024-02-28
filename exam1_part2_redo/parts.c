//
// Created by Max on 2/27/2024.
//

#include "parts.h"
#include <string.h>
#include <stdio.h>
#include "stdlib.h"

void append_part(struct partsT *inventory,
                 const int pno,
                 const char *pname,
                 const char *color,
                 char *location,
                 double weight){
    unsigned size = inventory->size;
    struct partT *var = malloc(sizeof(struct partT));
    var->pno = pno;
   var->color = malloc(sizeof(color));
   var->pname = malloc(sizeof(pname));
   var->location = malloc(sizeof(location));
    strcpy(var->color, color);
    strcpy(var->pname, pname);
    strcpy(var->location, location);
    var->weight = weight;
    inventory->parts[size] = var;
    inventory->size = size + 1;


}

void print_parts_report(const struct partsT * parts){
    printf("PNO | Name      | Color     | Weight    | Location \n====|===========|===========|===========|==========\n");
    for(int i =0; i < parts->size; i++){
        printf("%d   | %-10s| %-10s| %-10.3f| %s\n", parts->parts[i]->pno,
               parts->parts[i]->pname, parts->parts[i]->color, parts->parts[i]->weight,
               parts->parts[i]->location);

    }

}
