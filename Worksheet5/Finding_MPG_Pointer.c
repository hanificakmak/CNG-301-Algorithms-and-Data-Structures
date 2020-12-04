#include<stdio.h>
#define NUM 10

int main(){
	
	int i;
	float miles[10] = {240.5, 300.0, 189.6, 310.6, 280.7, 216.9, 199.4, 160.3, 177.4, 192.3};
	float gallons[10] = {10.3, 15.6, 9.7, 14, 16.3, 15.7, 14.9, 10.7, 9.3, 9.4};
	float mpg[10];
	float *mile_pg;
	
	mile_pg = &mpg[0];
	
	for(i=0; i<NUM; i++)
	{
		mpg[i] = miles[i]/gallons[i];

		printf("MPG %d is: %.2f\n", i+1, *(mile_pg+i));
	}

return 0;
}
