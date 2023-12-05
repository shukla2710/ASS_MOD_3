//C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include<stdio.h>

main()
{
	int num;
	printf("\n\n\t Input the Number  : ");
	scanf("%d",&num);
	printf("\n\n\t Output Is..");
	printf("\n\n\t %d ,%d ,%d ", num, num *num, num *num *num);
}
