//
// Created by Max on 1/31/2024.
//

#include "diamond.h"
#include <stdio.h>

void diamond(int x){
    char list[] = {'\\', '"', '!', '@', '#'};
    int n = (x/2);
    int i = 0;
    int j = (x/2) ;
    int cur = 0;


    while(i < n){
        for(int z = 0; z < j; z++){
            printf(" ");
        }
        for(int k = 0; 2*i +1 > k; k++){

            printf("%c", list[cur]);
        }
        printf("\n");
        i++;
        cur++;
        j--;
        if(cur == 5){
            cur = 0;
        }
    }


    while(i >= 0){
        for(int z = 0; z < j; z++){
            printf(" ");
        }
        for(int k = 0; 2*i +1 > k; k++){

            printf("%c", list[cur]);
        }
        printf("\n");
        i--;
        cur++;
        j++;
        if(cur == 5){
            cur = 0;
        }
    }

}