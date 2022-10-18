#include "main.h"

/**
 * _isalpha - checks if a character is alphabet lower or upper
 * @c: character being checked
 * Return: 1 if c is letter 0 if  otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
