#include<stdio.h>

int TwoMinimum(int, int);
int ThreeMinimum(int, int, int);


int main(){

	int x,y,z;
	printf("Enter 3 integers: ");
	scanf("%d %d %d", &x,&y,&z);
	
	if(TwoMinimum(x,y)<TwoMinimum(y,z))
		printf("Minimum value is %d", TwoMinimum(x,y));
	
	else
		printf("Minimum value is %d", TwoMinimum(y,z));
	
return 0;	

}


int ThreeMinimum(int x, int y, int z){
	
	if(x<y && y<z)
		return x;
	
	else if(y<x && x<z)
		return y;
		
	else 
		return z;
	
}

int TwoMinimum(int x, int y){

	if(x<y)
		return x;
		
	else 
		return y;
	
}
