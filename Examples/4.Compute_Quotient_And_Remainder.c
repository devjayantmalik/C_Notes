#include<stdio.h>

int main(){
	int numerator, denominator = 1;
	printf("Enter Numerator:\t");
	scanf("%d",&numerator);
	printf("Enter Denominator:\t");
	scanf("%d",&denominator);
	printf("-----------------------------\n");
	printf("Quotient of the number is %d\n",numerator/denominator);
	printf("Remainder of the number is %d\n",numerator % denominator);
	printf("-----------------------------\n");
	return 0;
}
