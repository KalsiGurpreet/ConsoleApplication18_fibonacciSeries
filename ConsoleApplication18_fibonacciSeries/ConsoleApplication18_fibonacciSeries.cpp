
/* 
[0] = 


[5]=[4]+[3], [4] = */

#include<stdio.h>

int main(void)
{
	short array1[10];
	short i;

	short oddPlaceArray[10];
	short evenPlaceArray[10];

	short x, y = 0;

	array1[0] = 1;
	array1[1] = 1;

	printf("%hd\n", array1[0]);
	printf("%hd\n", array1[1]);

	for (i = 2; i < 10; i++)    // end result needs to be 1,1,2,3,5
	{
		array1[i] = array1[i -1] + array1[i-2];  
		printf("%hd\n", array1[i]);

		
	}	
	

	for (x = 0; x < 5; x++)
	{
		printf("%hd\n", array1[(2*x)+1]);
		
	}
	

	return 0;



}