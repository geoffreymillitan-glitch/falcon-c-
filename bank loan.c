#include<stdio.h>
 int main()
 {float income; 
  int age; 
printf("ENTER YOUR AGE:");	 
scanf("%d", &age);	 

printf("ENTER YOUR ANNUAL INCOME:");
scanf("%f", &income);
	 
if(age >= 21 && income >= 21000)
{
printf("CONGRATULATIONS YOU QUALIFY FOR A LOAN");	
}

else if(age < 21 && income < 21000)
{
printf("UNFORTUNATELY,WE ARE UNABLE TO OFFER YOU A LOAN AT THIS TIME");	
}

else if(age < 21 && income >= 21000 || age >= 21 && income < 21000)
{
printf("UNFORTUNATELY,WE ARE UNABLE TO OFFER YOU A LOAN AT THIS TIME");	
}

return 0;	 
 }