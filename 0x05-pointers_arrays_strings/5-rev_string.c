#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string- boom
 * @s: slim
 * Return: nothing
 */

void rev_string(char *s)
{
int len = strlen(s) - 1;
char rev[] = "";
for (; len >= 0; len--)
{
rev =rev + s[len];
}
s = rev;
}
