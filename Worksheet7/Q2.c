#include<stdio.h>
#include<stdlib.h>

int main(){

	FILE *inFile;
	char myFile[1000]="Welcome to Advanced C Programming";
	
	inFile = fopen("hanifi.txt","w+");
		
	if (inFile==NULL){
		printf("Please check that file currently exists.\n");
	    exit(1);
	}
	
	else {
		fputs(myFile,inFile);
		printf("%s",myFile);
	}
	
return 0;

}
