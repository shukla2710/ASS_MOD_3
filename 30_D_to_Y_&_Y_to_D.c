//WAP to convert years into days and days into years.

#include<stdio.h>

main()
{
	int years,months,days, d, y;
	
    printf("\n\n\t Input the number of years : ");
	scanf("%d",&years);
	
	months=12*years;
    days=365*years;

	printf("\n\n\t Converting Years to Days...");
    printf("\n\n\t Total Months are : %d",months);
    printf("\n\n\t Total Days are : %d",days);
    
    printf("\n\n\t ................................");
    
    printf("\n\n\t Converting Days to Years...");
    printf("\n\n\t Input Days : ");
   	scanf("%d",&d);
   	
   	y=d/365;
   	printf("\n\n\t Total Years : %d",y);
   	
}
