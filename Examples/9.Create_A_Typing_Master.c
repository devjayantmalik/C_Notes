#include<stdio_ext.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define MAX 100

void generateTextByKeys(char *txt, char const * key1, char const * key2){
	for (int i = 0; i < MAX; i++)
	{
		if(i == MAX - 2){
			txt[i] = '\0';
			return;
		}
		srand(clock() + i);
		int result = rand() % 3;
		if(result == 2){
			txt[i] = *key1;
			i++;
			txt[i] = ' ';
		}
		else{
			txt[i] = *key2;
			i++;
			txt[i] = ' ';
		}
	}
}

void generateRandomText(char *txt){

	for (int i = 0; i < MAX; ++i)
	{
		srand(clock());
		txt[i] = 'a' + (rand() % 25);
		i++;
		txt[i] = ' ';

		if(i == MAX - 1){
			txt[i] = '\0';
		}
	}

}

void getKeys(char * key1, char * key2){
	printf("Enter first key to practice:\t");
	scanf("%c",key1);
	__fpurge(stdin);

	printf("Enter second key to practice:\t");
	scanf("%c",key2);
	__fpurge(stdin);
}

int getUserChoice(){
	int choice = 0;
	printf("===========================\n");
	printf("1. Custom keys to practice:\n");
	printf("2. Random keys to practice:\n");
	printf("===========================\n");
	printf("Enter your choice :\t");

	scanf("%d",&choice);
	__fpurge(stdin);

	return choice;
}

int main(int argc, char const *argv[])
{
	char key1 = 'A';
	char key2 = ';';
	char text[MAX];
	char userEntered[MAX];

	int choice = getUserChoice();
	switch(choice){
		case 1 : {
			getKeys(&key1, &key2);
			generateTextByKeys(text, &key1, &key2);
			break;
		}
		case 2 :{
			generateRandomText(text);
			break;
		}
		default:{
			printf("Invalid input, try again\n");
			exit(0);
		}
	}

	system("clear");

	printf("===============================\n");
	printf("%s\n",text);
	printf("===============================\n");

	__fpurge(stdin);
	scanf("%[^\n]", userEntered);

	int result = strcmp(userEntered, text);
	(result == 0) ? printf("All correct..\n") : printf("Try again...\n");

	return 0;
}