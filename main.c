#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int soBiMat, mynumber, count, extragame=1;
	const int MIN=1, MAX=100;
	srand(time(NULL));
	printf("Wellcome to my game!!\n\n");
	printf("My game is very simple!\n");
	printf("All you have to do what pick a number until correct.\n");
	printf("Gud luck!\n\n\n");
	while (extragame==1)
	{
		soBiMat=(rand()%(MAX-MIN+1))+MIN;
	
		while (mynumber!=soBiMat)
		{
			count++;
			printf("Your number: ");
			scanf("%d", &mynumber);
			if (soBiMat>mynumber)
			{
				printf("Oh noo, Bigger!!\n\n");
			}
			else if (soBiMat<mynumber)
			{
				printf("Oh noo, Smaller!!\n\n");
			}
			else
			{
				printf("\n\n\nCongratulations!!!\n");
				printf("You have %d times to win!\n", count);
				printf("You are winner <3!");
				count=0;
			}
		}
		printf("\n\nDo you want to play again?\n");
		printf("1. Yes.\n");
		printf("2. No.\n");
		printf("Your answer: ");
		scanf("%d", &extragame);
		printf("\n\n");
		if(extragame==1)
		{
			printf("Let's get itt!!\n\n");
		}
	}
	printf("\n\nSee you later!\n");
	printf("!!1st game of Weed!!");
	return 0;
}
