#include <math.h>
#include<stdio.h>
int main()

{
	float pa, ta, da;
	float d1 = 0.05;
	float d2 = 0.10;
	float d3 = 0.15;
	printf("ENTER PURCHASE AMOUNT:\n");
	scanf("%f", &pa );
	if(pa < 5000)
	{
		da=pa*d1;
		ta=pa-da;
		
		printf("TOTAL AMOUNT PAYABLE IS %.2f\n", ta );
		printf("DISCOUNT AWARDED IS %.2f\n", da );
	}
	
	else if(pa >= 5000 && pa <= 9999)
	{
		da=pa*d2;
		ta=pa-da;
		printf("TOTAL AMOUNT PAYABLE IS %.2f\n", ta );
		printf("DISCOUNT AWARDED IS %.2f\n", da );
	}
    else if(pa >= 10000)
	{
		da=pa*d3;
		ta=pa-da;
		printf("TOTAL AMOUNT PAYABLE IS %.2f\n", ta );
		printf("DISCOUNT AWARDED IS %.2f\n", da );
	}
	return 0;
}