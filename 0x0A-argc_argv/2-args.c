#include <stdio.h>
#include "main.h"

/**
 * main- argument it receives
 * @argc: pm
 * @argv: pm
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
int count = 0;

if (argc > 0)
{
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}
