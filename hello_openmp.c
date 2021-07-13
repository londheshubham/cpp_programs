#include<stdio.h>
#include <omp.h> 
int main() {
  #pragma omp parallel
  {
    printf("https://helloacm.com\n");     
  }
  return 0;
}
