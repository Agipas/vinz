#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main(int argc, string argv[])
{
	if (argc != 2)
	{
		printf("You entered incorrect key");
		return 1;
	}
	string key = argv[1];
	unsigned long keyCount = strlen(key);
        //checking is key alphabetical
	for (int k = 0; k < keyCount; k++)
	{
		if (isalpha!=(key[k]))
		{
			printf("Try again.");
			return 1;
		}
	}

	string text = GetString();
	if (text == NULL)
	{
		printf("Try again.");
		return 1;
	}
	for (int i = 0, n = 0; i < strlen(text); i++)
	{
		if (isalpha(text[i]))
		{
			//encrypt large letters
                        if (isupper(text[i]))
				printf("%c", ((((text[i] - 'A') + ((toupper(key[n++%keyCount])) - 'A') % 26) % 26) + 'A'));
                        
                        //encrypt small letters
			if (islower(text[i]))
				printf("%c", ((((text[i] - 'a') + ((tolower(key[n++%keyCount])) - 'a') % 26) % 26) + 'a'));
		}
		else
			printf("%c", text[i]);
	}

	printf("\n");
	return 0;
}
