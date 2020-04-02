#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int soBiMat, mynumber, count, extragame=1, nguoichoi;
	srand(time(NULL));
	printf("Wellcome to my game!!\n\n");
	while (extragame==1)
	{
		printf("1. 1 Player!\n");	
		printf("2. 2 Players!\n");
		printf("Your choice: ");
		scanf("%d", &nguoichoi);
		printf("\n\nMy game is very simple!\n");
		if (nguoichoi==2)
		{
			printf("One person will choose a number and one person will guess!\n");
			printf("Gud luck!\n\n\n");		
			printf("First person: ");
			scanf("%d", &soBiMat);
			while (mynumber!=soBiMat)
			{
				count++;
				printf("\n\nSecond person: ");
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
		}
		else if (nguoichoi==1)
		{
			int MAX, MIN, level;
			MIN=1;
			printf("All you have to do what guess a number until correct.\n\n");
			printf("!!LEVEL!!\n\n");
			printf("1. Level 1 (1-100)\n");
			printf("2. Level 2 (1-1000)\n");
			printf("3. Level 3 (1-100000)\n");
			printf("Your choice: ");
			scanf("%d", &level);
			switch(level)
			{
				case 1:
					MAX=100;
					break;
				case 2:
					MAX=1000l;
					break;
				case 3:
					MAX=100000;
					break;
			}	
			printf("Gud luck!\n\n\n");
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
