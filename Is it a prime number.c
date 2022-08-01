#include <stdbool.h>
#include <stdio.h>
#include <math.h>

bool is_prime(int num)
{
    int divtot = 0;
  
    if (num <= 1){
      return false;
    }
    
    int i = 1;
    while(i <= trunc(sqrt(num))){
      if(num % i == 0){
        divtot++;
      }
      i++;
    }
    if(divtot == 1 ){
      return true;
    }
  
    return false;
}