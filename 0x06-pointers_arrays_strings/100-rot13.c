#include "main.h"

/**
 * rot13 - encode a string using rot13
 * @s: input string
 * Return: pointer to the encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char swap;

	for (i = 0; s[i] != '\0'; i++)
	{
		swap = 0;
		for (j = 0; alpha[j] != '\0' && swap == 0; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot[j];
				swap = 1;
			}
		}
	}
	return (s);
}

