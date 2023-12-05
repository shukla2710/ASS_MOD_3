//Convert years into days and months.

#include<stdio.h>

main()
{
	int years,months,days;
	
    printf("\n\n\t Input the number of years: ");
	scanf("%d",&years);
	
	months=12*years;

    days=365*years;

    printf("\n\n\t Total Months are : %d",months);
    printf("\n\n\t Total Days are : %d",days);
}
