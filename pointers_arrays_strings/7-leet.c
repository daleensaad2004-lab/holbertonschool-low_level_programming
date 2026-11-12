#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: pointer to the encoded string
 */
char *leet(char *s)
{
	int i = 0, j;
	char l[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	while (s[i] != '\0')
	{
		j = 0;
		while (l[j] != '\0')
		{
			if (s[i] == l[j])
			{
				s[i] = n[j];
			}
			j++;
		}
		i++;
	}

	return (s);
}
