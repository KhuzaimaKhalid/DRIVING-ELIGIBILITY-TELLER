#include<stdio.h>

int main()
{
	printf("\t DRIVING ELIGIBILITY TELLER \n")
	int age;
	printf("\nenter your age: ");
	scanf("%d", &age);
	if(age>18){
		printf("adult\n");
		printf("you can vote\n");
		printf("you can drive");
	}
	else{
		printf("not adult \n");
	}
	
	
	
	return 0;
}
