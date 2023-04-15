#include<stdio.h>
enum Week_days
{
	monday,tuesday,wednesday,thursday,friday,saturday,sunday
};
main()
{
	int i;
	for(i=monday;i<=sunday;i++)
	{
		printf("%d",i);
	}
}
