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
int len;
char rev;
int len2, i;
while(s[len] != '\0')
len++;
len2 = len - 1;
for (i = 0;i < len / 2; i++)
{
rev = s[i];
s[i] = s[len2];
s[len2] = rev;
len2 -= 1;
}
}
