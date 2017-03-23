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
	printf("\n");
	MaxMin(numvals, value, &min, &max);
	printf("The maximum value is: %d\n", max);
	printf("The minimum value is: %d\n", min);
	return 0;
}


/* Function Defenitions */
void MaxMin(int numvals, int vals[],int* min, int* max)
{
	numvals=vals[0];
	for(int i = 0; i < TOTAL; i++)
	{
		int j = i + 1;
		if(vals[i] < vals[j] && vals[i] < numvals)
		{
			numvals=vals[i];
		}
	*min=numvals;
	}
	int dummy=vals[0];
	for(int a = 0; a < TOTAL; a++)
	{
		int b = a + 1;
		if(vals[a] > vals[b] && vals[a] > dummy)
		{
			dummy=vals[a];
		}
	*max=dummy;
	}
	return;
}


