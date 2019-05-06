#include<stdio.h>

int main(){
	int first, second, third = 0;

	printf("Enter First Number\t");
	scanf("%d",&first);
	printf("Enter Second Number\t");
	scanf("%d",&second);
	printf("Enter Third Number\t");
	scanf("%d",&third);

	int result = ( first > second ) ? ((first > third) ? first : third) :((second > third) ? second : third);

	printf("Out of %d %d and %d, Largest value is %d\n",first,second,third,result);
	return 0;
}
