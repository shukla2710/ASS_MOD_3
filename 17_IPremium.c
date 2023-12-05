//Calculate person’s insurance premium based on salary.

#include<stdio.h>

main()
{
 	float salary, years;
 	printf("\n\n\t Input Salary :");
 	scanf("%d", &salary);
 
 	printf("\n\n\t Insurance policy term(in years) : ");
 	scanf("%d", &years);
 
 	printf("\n\n\t Your Yearly Premium  : %8.2f\n", salary/(years)); 
 
}
