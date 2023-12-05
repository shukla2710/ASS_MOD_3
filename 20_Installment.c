/*Accept monthly salary from the user and deduct 10% insurance premium, 
10% loan installment find out of remaining salary. */

#include<stdio.h>

main()
{
	long int sal, finalsal;
	int ins, loan;
	
	printf("\n\n\t Input Monthly Salary : ");
	scanf("%ld",&sal);
	
	ins=(sal*10)/100;
	loan=(sal*10)/100;
	
	finalsal=sal-ins-loan;
	
	printf("\n\n\t Final Salary : %ld", finalsal);
	
	
}
