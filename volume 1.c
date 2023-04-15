#include<stdio.h>
struct Distance
{
	float inch;
	float feet;
	
}d1;
main()
{
	printf("Enter value of feet=");
	scanf("%f",&d1.feet);
    
	printf("Enter value of inch=");
	scanf("%f",&d1.inch);

	
    while((d1.inch)>=12)
	{
    	d1.inch=d1.inch-12;
    	d1.feet++;
    	printf("distance in feet & inch=%.1f,%.1f",d1.feet,d1.inch);
	}
	
		
}
