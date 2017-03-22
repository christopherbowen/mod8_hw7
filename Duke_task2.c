/*
 * =====================================================================================
 *
 *       Filename:  Duke_task2.c
 *    Description:  display a random array and the highest and lowest value
 *
 *        Created:  03/20/2017 06:40:07 PM
 *         Author:  Christopher Bowen (), christopherbowen@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include <time.h>
#define TOTAL 10
/* Function Prototypes */
void MaxMin(int numvals, int vals[],int* min, int* max);
/* Main Program */
int main(int argc, char *argv[])
{
	int value[TOTAL];
	int min, max;
	int numvals=0;
	srand(time(NULL));
	printf("Generating random list\n");
	printf("This list is: \n");
	for(int i = 0; i < TOTAL; i++)
	{
		value[i]= rand()%100;
		printf("%d ", value[i]);
	}
	MaxMin(numvals, value, &min, &max);
	printf("\nThe maximum value is: %d\n", max);
	printf("The minimum value is: %d\n", min);
	return 0;
}


/* Function Defenitions */
void MaxMin(int numvals, int vals[],int* min, int* max)
{
	for(int i = 0; i < 9; i++)
	{
		numvals = vals[i];
		int j = i + 1;
		if(numvals < vals[j])
		{
			*min=vals[i];
			numvals=*min;
			printf("%d\n", numvals);
		}
	}
	return;
}


