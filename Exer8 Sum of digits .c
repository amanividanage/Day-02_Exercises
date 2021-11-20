#include <stdio.h>
// Calculating the sum of the  digits of a  3 digit number
int main(){
	
	int num;
	int units, tens, hundreds;

	printf("Enter the  3 digit number : ");
	scanf("%d" , &num);
	
	units  = num % 10;
	tens   = (num / 10) %10 ;
	hundreds = num / 100;
	
	
      printf("The sum of the digits is %d\n" , units+tens+hundreds);
      return 0;
	
} 