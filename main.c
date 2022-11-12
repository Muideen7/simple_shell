#include "main.h"

/*
 * main - func with infinite loop 
 * @argc: arguement to main
 * @argv: arguement to main 
 * Return: loop
*/
int main(int argc, char argv)
{
	(void)argv;
	(void)argc;

	signal(SIGINT, controlC);
	prompt();
	return (0);
}
