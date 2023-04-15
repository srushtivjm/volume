#include<stdio.h>
struct Student
{
	int roll_no;
	char name[100];
	int chem_marks;
	int maths_marks;
	int phy_marks;
	float percentage;
};
main()
{
    int i;
    struct Student s[5];
	for(i=0;i<5;i++)
	{
		printf("Enter Roll no.=");
		scanf("%d",&s[i].roll_no);
		printf("Enter name.=");
		scanf("%s",&s[i].name);
		printf("Enter chemestry marks=");
		scanf("%d",&s[i].chem_marks);
		printf("Enter mathemetics marks=");
		scanf("%d",&s[i].maths_marks);
		printf("Enter physics marks=");
		scanf("%d",&s[i].phy_marks);
    }
		printf("-----------------------------------------\n");
		for(i=0;i<5;i++)
		{
			s[i].percentage=s[i].chem_marks+s[i].maths_marks+s[i].phy_marks;
			s[i].percentage=(s[i].percentage*100)/300;
			
			printf("Roll_no=%d\nname=%s\nchem_marks=%d\nmaths_marks=%d\nphy_marks=%d\n",s[i].roll_no,s[i].name,s[i].chem_marks,s[i].maths_marks,s[i].phy_marks);
			printf("Percentage=%.2f\n",s[i].percentage);
		}
    	
}
