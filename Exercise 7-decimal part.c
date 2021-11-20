#include <stdio.h>

// Getting the decimal part of the floating point number
int main(){
	float data;
	printf("Enter the data of floating point type: \n");
	scanf("%f ", &data);
	
	printf("The integer part of the number is : %d\n", (int)data);
	printf("The decimal part of that number is %.2f\n" , data - (int)data);
	return 0;
}
