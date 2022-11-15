#include "main.h"

/**
 * lookforslash - identifies if first char is a slash.
 * @cmd: first string
 * Return: 1 if yes 0 if no.
*/
int lookforslash(char *cmd)
{
	int cont = 0;

	while (cmd[cont])
	{
		if (cmd[0] == '/')
		{
			printf("%c\n", cmd[0]);
			return (1);
		}

		cont++;
	}
	return (0);
}


/**
 * compareExit - Checks if the user is typed exit
 * @s1: first of the string
 * @s2: exit the string
 * Return: 1 if yes 0 if no.
 */
int compareExit(char *s1, char *s2)
{
	int i = 0;

	for (; (*s2 != '\0' && *s1 != '\0') && *s1 == *s2; s1++)
	{
		if (i == 3)
			break;
		i++;
		s2++;
	}

	return (*s1 - *s2);
}

