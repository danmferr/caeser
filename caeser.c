#include <cs.50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])
{
	if (argc != 2)
		return 1;
	else
	string m=getstring();
	int i = 0
	int n = 0;
	int key = atoi(argv[1]);
}
for (int i = 0; i< strlen(m) ; i++)
{
if (isalpha(m[i]))

if (islower(m[i]))
int y= (((m[i]-97+key)%26)+97);
printf("%c", y);
}
if (isupper(m[i]))
{
int z = (((m[i]-65+key)%26)+65);
printf("%c", z);
}
