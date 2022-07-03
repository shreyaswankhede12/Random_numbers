#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NUM 1000000

int main() {
	FILE *fp = fopen("v.dat", "w");
	if (!fp) {
		printf("Couldn't open file\n");
		return 1;
	}
	for (int i = 0; i < NUM; i++) {
		double u = (double)rand()/RAND_MAX;
		if (u >= 1) u = 0.999;
		double v = -2 * log(1 - u);
		fprintf(fp, "%lf\n", v);
	}
	fclose(fp);
	return 0;	
    
}