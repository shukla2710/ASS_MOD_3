//Convert days into months

#include<stdio.h>

main()
{	
   int months, days ;
   printf("\n\n\t Input days : ") ;
   scanf("%d",&days) ;
   months=days/30 ;
   days=days%30 ;
   printf("\n\n\t Months = %d Days = %d", months, days) ;
} 
