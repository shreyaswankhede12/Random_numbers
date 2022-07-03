#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include"coeffs.h"
int main(){
  char*str="gau.dat";
  printf("mean:%lf, variance:%lf",mean(str),variance(str));
    //Mean:-0.000417,Variance:0.999902
    return 0;
}

