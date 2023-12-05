//Convert kilometers into meters.

#include<stdio.h>

main()
{
	int m;
  	float km;
  
  	printf("\n\n\t Input the distance in kilometers : ");
  	scanf("%f",&km);
  
  	//Formula to convert Kilometers into meters
  	m=km*1000;
  
  	printf("\n\n\t Converted into Meter = %d", m);
}



