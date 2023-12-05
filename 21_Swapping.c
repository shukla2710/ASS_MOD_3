/* Accept 2 numbers from user 
and swap 2 numbers with using 3rd variable 
and without using 3rd variable.  */

#include<stdio.h>
main()
{
	int n1, n2, n3;
	
	printf("\n\n\t Input n1 : ");
	scanf("%d",&n1);
	printf("\n\n\t Input n2 : ");
	scanf("%d",&n2);

	printf("\n\n\t n1 = %d", n1);
	printf("\n\n\t n2 = %d", n2);
	
	//Using 3rd variable
	n3=n1;
	n1=n2;
	n2=n3;
	
	printf("\n\n\t ...................");
	printf("\n\n\t After swapping using 3rd variable ..");
	printf("\n\n\t n1 = %d", n1);
	printf("\n\n\t n2 = %d", n2);
	
	printf("\n\n\t ...................");
	
	/*
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	printf("\n\n\t After swapping without using 3rd variable ..");
	printf("\n\n\t n1 = %d", n1);
	printf("\n\n\t n2 = %d", n2);
	
	*/
	
}
