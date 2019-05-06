#include<stdio.h>
#include<unistd.h>

int main(){
	//swap two numbers
	int first = 0;
	int second = 0;
	int temp = 0;

	printf("Enter First Number:\t");
	scanf("%d",&first);

	printf("Enter Second number:\t");
	scanf("%d",&second);

	temp = first;
	first = second;
	second = temp;

	printf("Swapping numbers.....Please Wait....\n");
	sleep(1);
	fflush(stdout);
	printf("Swapping Successful.....\n");
	printf("------------------------\n");
	printf("First : %d\n",first);
	printf("Second : %d\n", second);
	printf("------------------------\n");
	return 0;
}
