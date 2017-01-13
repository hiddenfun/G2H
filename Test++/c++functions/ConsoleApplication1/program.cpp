// program.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "mylib.h"

void phoenix()
{
	printf("Goodbye World!");
}
int summarizer(int a, int b) 
{
	return a + b;
}
int main()
{
	mylib myfunctions;
	myfunctions.phoenix();
	//phoenix();
	
	printf("\nSumm = %i", myfunctions.summarizer(2, 3));
    return 0;
}

