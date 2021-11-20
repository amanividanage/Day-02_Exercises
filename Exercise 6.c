// Time measuring calculator

#include <stdio.h>
int main()
{
	int distance= 300;
	int speed=80;
	int hours = distance/ speed;
	float speed_in_minutes =speed /60.0;
	int remaining_minutes = (distance % speed ) /speed_in_minutes;
	printf("The time taken to reach the destination: %d hours and  %d minutes", hours, remaining_minutes);
	return 0;
}