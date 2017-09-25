#include<stdio.h>
int main()
{
	struct student
	{
		float ban;
		float eng;
		float mat;
		float avg;
	}s[10];
	int i,j=0;
	float max=0;
	printf("Enter the marks : \n");

	for(i=0;i<10;i++)
	{
		scanf("%f%f%f",&s[i].ban,&s[i].eng,&s[i].mat);
		s[i].avg=(s[i].ban+s[i].eng+s[i].mat)/3;
		if(max<s[i].avg)
		{
			max=s[i].avg;
			j=i;
		}

	}
	for(i=0;i<10;i++)
	{
		printf("bangla=%.2f\nenglish=%.2f\nmath=%.2f\naverage=%.2f\n\n",s[i].ban,s[i].eng,s[i].mat,s[i].avg);
	}
	printf("highest student\n");
	printf("bangla=%.2f\nenglish=%.2f\nmath=%.2f\naverage=%.2f\n\n",s[j].ban,s[j].eng,s[j].mat,max);
}
