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

