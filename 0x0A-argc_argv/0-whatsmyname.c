#include "main.h"
#include <stdio.h>
/**
* main - function that prints itslef followed by a new name
* @argc: parameter that counts the number of arguements passed to the function
* @argv:an array poniter to the number of strings
* Return: 0 always sucess
*/
int main(int argc  __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
return (0);
}
