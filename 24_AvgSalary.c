//Accept 5 employees name and salary and count average and total salary.

#include<stdio.h>

main()
{
	char en1[20], en2[20], en3[20], en4[20], en5[20];
	int s1, s2,s3, s4, s5, TS, AVG;
	
	printf("\n\n\t Input 5 Employees' Name : ");
	scanf("%s %s %s %s %s", en1, en2, en3, en4, en5);
	
	printf("\n\n\t Input 5 Employees' Salary : ");
	scanf("%d %d %d %d %d",&s1, &s2, &s3, &s4, &s5);
	
	TS=s1+s2+s3+s4+s5;
	printf("\n\n\t Total Salary : %d",TS);
	
	AVG=TS/5;
	printf("\n\n\t Average Salary : %d",AVG);
	
}
