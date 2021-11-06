#include <stdio.h>
int main() {
	float input;
	printf("Please enter a number : ");
	scanf("%f", &input);
	//The user was asked to input a float to determine which interval the number belongs to
	if ((input>=0) && (input<=25))
		printf("Interval [0,25]");
	if ((input>25) && (input<=50))
		printf("Interval (25, 50]");
	if ((input>50) && (input<=75))
		printf("Interval (50, 75]");
	if ((input>75) && (input<=100))
		printf("Interval (75, 100]");
	//If statements including 2 conditions using "and", are used to determine the intervals
	else
		printf("Out of intervals");
	return 0;
}
