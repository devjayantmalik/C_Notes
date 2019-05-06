#include<stdio.h>

int max(int first, int sec){
	return (first > sec) ? first : sec;
}

int main(){
	int first, second, third, fourth = 0;
	printf("Enter First Number :\t");
	scanf("%d",&first);
	printf("Enter Second Number :\t");
	scanf("%d",&second);
	printf("Enter Third Number :\t");
	scanf("%d",&third);
	printf("Enter Fourth number :\t");
	scanf("%d",&fourth);

	int maximum = max( max(first, second), max(third, fourth) );
	printf("Maximum of %d, %d, %d and %d is %d\n",first,second,third,fourth,maximum);
	return 0;
}
