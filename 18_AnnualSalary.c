// Calculate person’s Annual salary.

#include <stdio.h>

main()
{
	
    float basic, da, hra, annual_salary;
    
    printf("\n\n\t Input the basic salary : ");
    scanf("%f",&basic);
    
    if (basic<=25000)
	{
        da=(basic*10)/100;
        hra=(basic*15)/100;
    }
    
    else if (basic<=40000)
	{
        da=(basic*12)/100;
        hra=(basic*18)/100;
    }
    
    else
	{
        da=(basic*15)/100;
        hra=(basic*20)/100;
    }
    
    annual_salary=basic+da+hra;
    
    printf("\n\n\t Annual salary : %.2f", annual_salary);
  
}
