#include<stdio.h>

int main()
{float attendance, marks;

printf("ENTER YOUR ATTENDANCE:");
scanf("%f", &attendance);	
	
printf("ENTER YOUR AVERAGE MARKS:");
scanf("%f", &marks);	

if(attendance >= 75 && marks >= 40)
{
printf("ELIGIBLE");
}	
else if(attendance < 75 && marks <40)
{
printf("NOT ELIGIBLE");	
}
		
else if(attendance > 75 && marks <= 40 || attendance < 75 && marks <= 40)
{
printf("NOT ELIGIBLE");	
}	return 0;
}