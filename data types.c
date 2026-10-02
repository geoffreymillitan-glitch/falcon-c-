//Variables And Data Types

#include <stdio.h>

int main(){  
	//declare and initialize variables
	char grade = 'A';//%c
	char name[5] = ("Geoffrey");//%s
	int age = 19;//%d
	float marks = 70;//%f
	
	
	printf("Enter your grade: \n");
	scanf("%c", &grade);
	
	printf("Enter your name: \n");
	scanf("%s", &name);
	
	printf("Enter your age: \n");
	scanf("%d", &age);
	
	printf("Enter your marks: \n");
	scanf("%f", &marks);
	 	
	return 0;
}