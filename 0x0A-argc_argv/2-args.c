#include "main.h"
#include <stdio.h>
/**
* main - function that prints itslef followed by a new name
* @argc: parameter that counts the number of arguements passed to the function
* @argv:an array poniter to the number of strings
* Return: 0 always sucess
*/
int main(int argc, char *argv[])
{
int i;
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
