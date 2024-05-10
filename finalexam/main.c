#include <stdint.h>
#include <stdio.h>
#include "exam.h"

int main(){
  int64_t vec[5] = {4, 9, 2, 7, 6};
  int64_t n = 3;
  int64_t m = 5;


  modall(vec, n, m);
  for(int i =0; i < m; i++)
   printf("%lld\n", vec[i]);

return 0;

}
