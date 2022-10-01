#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - function that prints itslef followed by a new name
* @argc: parameter that counts the number of arguements passed to the function
* @argv:an array poniter to the number of strings
* Return: 0 always sucess
*/
int main(int argc, char *argv[])
{
int i;
int mult = 1;
if (argc < 2)
{
	printf("Error");
	return (1);
}
for (i = 1; i < argc; i++)
{
	if( i > 2)
	break;
	mult = mult * atoi(argv[i]);
	printf("%d\n", mult);
}
return (0);
}
