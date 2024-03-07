//
// Created by Max on 3/3/2024.
//

#include "float2bin.h"
#include <string.h>
#include <stdlib.h>

char *float2bin(double x){
    int i = 0;
    char *bin;
    bin = (char *) malloc(65 * sizeof(char));
    if(x >= 1 || x <=0) {
        *bin = '\0';
        return bin;
    }
    while(i != 64){
        x = x * 2;
        if(1- x == 0){
            bin[i] = 49;
            i++;
            break;
        }
        if(x > 1){
            bin[i++] = 49;
            x = x - 1;
        }
        else{
            bin[i++] = 48;
        }
    }
    bin[i] = '\0';

    return bin;
}
