//WAP to calculate swap 2 numbers with using of multiplication and division.

#include<stdio.h>  
  
main()  
{  
    int a, b;  
      
	printf("\n\n\t Input a : ");  
	scanf("%d",&a);
	printf("\n\n\t Input b : ");  
	scanf("%d",&b);
    
    printf("\n\n\t a = %d and b = %d", a, b);  
  
    a=a*b;  
    b=a/b;  
    a=a/b;  
  
    printf("\n\n\t After swapping a = %d and b = %d", a ,b);  
    
}  
