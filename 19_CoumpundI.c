/* Calculate compound interest
Formula to calculate compound interest annually is given by: 
Amount= P(1 + R/100)t

Compound Interest = Amount – P
Where, 
	P is principal amount 
	R is the rate and 
	T is the time span
 
*/

#include <stdio.h> 
#include<math.h>  
  
main()  
{ 
  	double p=10000 , r=5, t=2;  
  
  	// Calculating compound Interest 
  	double Amount = p*((pow((1 + r/ 100), t))); 
  	double CI = Amount-p; 
   
  	printf("\n\n\t Compound Interest is : %lf",CI); 

} 
