#include "main.h"
#include "2-strlen.c"

/**
* rev_string- reverse entierement un string
* @s: le charactere a getstring pour reverse
*/

void rev_string(char *s)
{

int start;
int end = 0;
int temporaire;
while (s[end] != '\0')
	{
	end++;
	}
	for (start = 0; start < end / 2; start++)
	{
	temporaire = s[start];
	s[start] = s[end - start - 1];
	s[end - start - 1] = temporaire;
	}
}
