/*
 * =====================================================================================
 *
 *       Filename:  Duke_Task1.c
 *       	Usage:  ./Duke_Task1.c
 *    Description:  mod8_hw7-task1  
 *
 *        Version:  1.0
 *        Created:  03/21/2017 02:47:21 AM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Tysen Bair (), tysenbair@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>

#define NUM 5
/* Function Prototypes */
void Copy_Arry(double ar1[], double ar2[],int n);
void Copy_Ptr(double *ar1, double *ar2, int n);
//void Copy_Ptrs(double *ar2, double *start, double *end);
void Show_Arr(double ar[], double n);

/* Main Program */
int main(int argc, char *argv[])
{
	double ard[NUM] = {1.5, 2.5, 3.5, 5.8, 6.7};
	double ard2[NUM];
	printf("Source Array is: \n");
	Show_Arr(ard, NUM);
	printf("Coppied Array is: \n");
	Copy_Arry(ard, ard2, NUM);
	printf("Coppied Array using pointer is: \n");
	Copy_Ptr(ard, ard2, NUM);
	printf("Coppied Array using pointer range: \n");
//	Copy_Ptrs(ard, ard2, NUM);
	
	return 0;
}
	
	
/* Function Defenitions */
void Copy_Arry(double ar1[], double ar2[],int n)
{
	for(int i = 0 ; i < n ; i++)
	{
		ar2[i] = ar1[i];
		printf(" %.1f\n",ar2[i]);
	}
	return;
}
void Copy_Ptr(double *ar1, double *ar2, int n)
{
	for(int i = 0 ; i < n ; i++)
	{
		*(ar2) = *(ar1);
		printf(" %.1f\n",ar2[i]);
	}

	return;
}
//void Copy_Ptrs(double *ar2, double *start, double *end)
//{
//	while(*start != *end) 
//	{
//		*(ar2) = *(ar2);
//		ar2++;
//		printf(" %.1f\n",*ar2);
//	}
//	return;
//}
void Show_Arr(double ar[], double n)
{
	for(int i = 0 ; i < n ; i++)
	{
		printf(" %.1f\n",ar[i]);
	}
	return;
}

