#include<stdio.h>

struct Date{
int month;
int day;
int year;
};

int days(struct Date);
void larger(struct Date, struct Date);

int main(){

	struct Date myself;
	
	myself.month;
	myself.day;
	myself.year;
	
	struct Date other;
	
	other.month;
	other.day;
	other.year;
	
	
  	//Q1 Part 
			
	printf("Enter your birthday: ");
	scanf("%d/%d/%d", &myself.month, &myself.day, &myself.year);

	
	if (myself.month==1){
		   printf("You are born in January");
	    }
	else if (myself.month==2){
		printf("You are born in February");
	    }
	else if (myself.month==3){
		printf("You are born in March");
	    }
	else if (myself.month==4){
		printf("You are born in April");
		}
	else if (myself.month==5){
		printf("You are born in May");
	    }
	else if (myself.month==6){
		printf("You are born in June");
		}
	else if (myself.month==7){
		printf("You are born in July");
	    }
	else if (myself.month==8){
	       printf("You are born in August");
	    }
	else if (myself.month==9){
		printf("You are born in September");
	    }
	else if (myself.month==10){
		printf("You are born in October");
	    }
	else if (myself.month==11){
		printf("You are born in November");
	    }
	else if (myself.month==12){
		printf("You are born in December");}

	else
		printf("Invalid Value!");
    
	// Q2 Part 

	printf("\nYou were born %d days later than 1/1/1900!", days(myself));

	// Q3 Part

	printf("\nEnter date 1: ");
	scanf("%d/%d/%d", &myself.month, &myself.day, &myself.year);

	printf("Enter date 2: ");
	scanf("%d/%d/%d", &other.month, &other.day, &other.year);

	larger(myself,other);
	

return 0;
}

int days(struct Date myself){
	
	int dayNum;	
	
	dayNum=(myself.month*30)+((myself.year-1900)*365)+(myself.day-1);	
	
	return dayNum;	
		
}

void larger(struct Date myself, struct Date other){

	if(myself.year==other.year)
		printf("%d/%d/%d",myself.month,myself.day,myself.year);	
		
	if(myself.year==other.year && myself.month>other.month)
		printf("%d/%d/%d",myself.month,myself.day,myself.year);	
	
	if(myself.year>other.year && myself.month==other.month && myself.day==other.day)
		printf("%d/%d/%d",myself.month,myself.day,myself.year);	

	if(myself.year==other.year && myself.month==other.month && myself.day<other.day)
		printf("%d/%d/%d",other.month,other.day,other.year);
	
	if(myself.year==other.year)
		printf("%d/%d/%d",other.month,other.day,other.year);

	if(myself.year<other.year)
		printf("%d/%d/%d",other.month,other.day,other.year);
    
}
