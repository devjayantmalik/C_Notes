#include<stdio.h>
#include<unistd.h>

int main(){
	printf("Loading program .....\n");
	sleep(1);
	fflush(stdout);
	printf("Program loaded Successsfully\nEnter number to start addition or 0 to exit.\n");
	long int sum = 0;
	while(1){
	  int number = 0;
	  printf("Enter Number :\t");
	  scanf("%d",&number);
		if(number == 0){
			printf("Sum of entered numbers is %ld\n",sum);
			printf("Exiting program...\nProgram Exited Successfully...\n");
			break;
		  }
	  sum = sum + number;
	}
	return 0;
}
