#include<stdio.h>
#include<math.h>

int main()
{float radius, height;
 float volume, surfacearea;

printf("ENTER THE RADIUS:");
scanf("%f", &radius);

printf("ENTER THE HEIGHT:");
scanf("%1f", &height);	
	
volume=3.142*radius*radius*height;
surfacearea=2*3.142*radius*radius*height;	

printf("Volume = %.2f\n", volume);
printf("Surface area = %.2f\n", surfacearea);	

return 0;	
}