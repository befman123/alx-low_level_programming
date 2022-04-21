#include "main"
/*
 *Encode a string into 1337
 */char *leet(char *s)
{
	char *checklist;
	char *replacelist;
	int i;
	int j;

	checklist = "aeotl";
	replacelist = "43071"
	i = 0;
	while (*(s + i) != 0)
	{
		j = 0;
		while (*(checklist + j) != 0)
		{
			if (*(s + i) == *(checklist + j) ||
			    *(s + i) == (*(checklist + j) - 32))
			{
				*(s + i) = *(replacelist + j);
			}
		}
	}
	return (s);
}
