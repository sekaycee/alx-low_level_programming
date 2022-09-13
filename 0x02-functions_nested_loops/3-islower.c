/**
 * _islower - check if argument is lowercase
 * @c: integer argument
 *
 * Return: 1 if true and 0 if false
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}

