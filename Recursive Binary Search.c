//Array needs to be sorted to use Binary Search Algorithm.

#include<stdio.h>

int BinarySearch(int list[], int, int, int);


int main(){
	
	int list[100];
	int size, searchKey;
	
	printf("Enter the size of a list: ");
	scanf("%d", &size);
	
	for(int i=0; i<size; i++)
			scanf("%d", &list[i]);
	

	
	int first=0;
	int last=size-1;

	printf("Enter the search key: ");
	scanf("%d", &searchKey);
	
	int indexNum = BinarySearch(list, first, last, searchKey);
	
	if(indexNum != -1)
		printf("Element found at index %d", indexNum);
	
	else
		printf("Element not found in the array");

	return 0;
}

int BinarySearch(int list[100], int first, int last, int searchKey){
	
	int mid = (first + last)/2;
         
	if(list[mid] == searchKey)
		return mid;
		 
	else if(searchKey < list[mid])
    	return BinarySearch(list, first, mid-1, searchKey); 
	
	else
    	return BinarySearch(list, mid+1, last, searchKey);
    	
    	if(first > last)
    	return -1;

}
	
