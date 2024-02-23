//
// Created by Max on 2/6/2024.
//

#include "parts.h"
#include "stdlib.h"
#include <stdio.h>
#include <string.h>
void load_parts(struct partsT * parts){
    struct partT part;
    int done = 0;
    int i = 0;
    parts->size = 0;
    while(!done){
        int x = scanf("%d, %10[^,], %10[^,], %lf, %10s",
                      &part.pno, part.pname, part.color, &part.weight, part.location);

        if(x == EOF)
            done = 1;
        else {
            parts->parts[i++] = part;
            parts->size = (parts->size) + 1;
        }

    }
}


void print_parts_report(const struct partsT * parts){
    printf("PNO | Name      | Color     | Weight    | Location \n====|===========|===========|===========|==========\n");
    for(int i =0; i < parts->size; i++){
        printf("%d   | %-10s| %-10s| %-10.3f| %s\n", parts->parts[i].pno,
               parts->parts[i].pname, parts->parts[i].color, parts->parts[i].weight,
               parts->parts[i].location);

    }

}

struct partT * find(int pno, struct partsT *parts){
    struct partT *ret = malloc(sizeof(struct partT));;
    for(int i=0; i < parts->size;i++){
        if(parts->parts[i].pno == pno) {
           *ret = parts->parts[i];
        }
    }

    return ret;
}

void print_part(const struct partT *part){
    printf("(PNO) %d | (NAME) %s | (COLOR) %s | (WEIGHT) %0.3lf | (LOCATION) %s",
      part->pno,
           part->pname,part->color,part->weight,
           part->location);
}

void insert_part(const struct partT *part, struct partsT *parts){
    int insert = part->pno - 1;


    unsigned siz = parts->size;
    while(insert <= siz){
       parts->parts[siz] = parts->parts[siz - 1];
        siz--;
    }
    parts->parts[insert] = *part;
//    parts->size = parts->size + 1;
    parts->size++;
}

void delete_part(int pno, struct partsT *parts){
    int siz = parts->size;
   unsigned int i = pno -1;
    while(i< siz -1){
     parts->parts[i] = parts->parts[i+1];
     i++;
    }
    parts->size--;
}