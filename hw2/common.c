//
// Created by Max on 1/27/2024.
//

#include "common.h"
#include "string.h"
#include <stdio.h>


void common(const char s1[], const char s2[], char rslt[]){
    // making sure the rslt array is empty
    for(int i = 0; rslt[i] != '\0'; i++){
        rslt[i] = '\0';
    }
    int x = (int) strlen(s1);
    int y = (int) strlen(s2);
    int cur = 0;

    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            if(s1[i] == s2[j]){
                int true = 0;
                for(int z = 0; z < strlen(rslt); z++) {
                    if(rslt[z] == s1[i]){
                        true = 1;
                    }
                }
                if(true == 0){
                    rslt[cur] = s1[i];
                    cur++;
                }
            }
        }
    }
    rslt[++cur] = '\0';
}
