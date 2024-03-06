#include "main.h"

/**
 * _memcpy - change memory with constant byte
 * @dest: pointer string destination
 * @src: pointer string source
 * @n: n bytes of memory pointed
 * Return: pointer to the memory dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *p = dest;
    unsigned int i = 0;

    for( i = 0;*src && i < n; i++);
    {
        dest[i] = src[i];
    }

    return (dest);
}
