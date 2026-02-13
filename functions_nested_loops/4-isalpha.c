#include "main.h"
/**
    * _isalpha - checks if alpha char, regardless of case
    * @c: character (int)
    *
    * Return: 1 if true, 0 otherwise
    */
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
return (1);
else
return (0);
}
