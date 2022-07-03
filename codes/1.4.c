#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include"coeffs.h"
int main(){
     char* str="uni.dat";
    double m=mean(str);
   double v=variance(str);
    printf("Mean:%lf,Variance:%lf",m,v);
    //Mean=0.500137, Variance=0.083251
    return 0;
}