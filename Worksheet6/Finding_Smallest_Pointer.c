#include<stdio.h>

void find__smallest(int a[], int n, int *smallest);

int main(){
	
	int a[100];
	int s,element,i;
	printf("How many elements you want to store (n)? ");
	scanf("%d",&element);
	
	for(i=0; i<element; i++)
	{
		printf("Enter a value to be stored: ");	
		scanf("%d",&a[i]);
	}
	
	find__smallest(a,element,&s);	
	printf("Smallest value stored is %d",s);	
			



return 0;
}

void find__smallest(int a[], int n, int *smallest){
	
	int i;
	*smallest=a[0];
	
	for(i=0;i<n;i++)
	{
    	if(a[i]<*smallest)
        *smallest=a[i]; 	
	}
}
