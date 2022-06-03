#!/bin/bash
#include<stdio.h>

int main(void){
	
	char funny;

	int huge;

	long along;

	long long grain;
	float goat;

 	printf("Size of a char: %lu byte(s)\n", sizeof(funny));
	printf("Size of an int: %lu byte(s)\n", sizeof(huge));
	printf("Size of a long int: %lu byte(s)\n", sizeof(along));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(grain));
	printf("Size of a float: %lu byte(s)\n", sizeof(goat));


	return(0);
	
}
