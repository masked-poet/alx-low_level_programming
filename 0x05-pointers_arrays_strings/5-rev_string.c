nclude "main.h"

/**
 *rev_string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
 */
void rev_string(char *s)
{
	int a, i, f;
	char temp;

	for (a = 0; s[a] != '\0'; a++)
		;
	i = 0;

	f = a / 2;

	while (half--)
	{
		temp = s[a - i - 1];
		s[len - i - 1] = s[i];
		s[i] = temp;

		i++;
	}
}

