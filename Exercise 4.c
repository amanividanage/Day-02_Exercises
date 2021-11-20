// Obtaining the value of n th term of an arithmetic sequence 

#include <stdio.h>

int main(){
	int n;
	float d1, m, a1;
	printf("d:");
	 scanf("%f", &d1);
	printf("a1:");
	 scanf("%f", &a1);
	printf("n:");
  	scanf("%d", &n);
	m = a1+ (n-1)*d1;
	printf("The value of m is : %f", m);
	return 0;
	
}