#include "shell.h"


int token_len(char *str, char *delim);
int count_tokens(char *str, char *delim);
char **_strtok(char *line, char *delim);


/**
 * token_len - locates the delimeter index marking
 * @str: the string to be searched.
 * @delim: the delimiter character
 * Return: The delimeter index marking
 */


int token_len(char *str, char *delim)

{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != *delim)
	{
		len++;
		index++;
	}

	return (len);
}


/**
 * count_tokens - counts the number of delimited words
 * @str: The string to be searched
 * @delim: The delimeter character
 * Return: The number of words contained within str
 */

int count_tokens(char *str, char *delim)

{
	int index, tokens = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (*(str + index) != *delim)
		{
			tokens++;
			index += token_len(str + index, delim);
		}
	}

	return (tokens);
}


/**
 * _strtok - tokenizes a string
 * @line: The string
 * @delim: The delimiter character to tokenize the string with
 * Return: A pointer to an array containing the tokenized words
 */

char **_strtok(char *line, char *delim)

{
	char **ptr;
	int index = 0, tokens, t, letters, l;

	tokens = count_tokens(line, delim);
	if (tokens == 0)
		return (NULL);

	ptr = malloc(sizeof(char *) * (tokens + 2));
	if (!ptr)
		return (NULL);

	for (t = 0; t < tokens; t++)

	{
		while (line[index] == *delim)
			index++;

		letters = token_len(line + index, delim);

		ptr[t] = malloc(sizeof(char) * (letters + 1));
		if (!ptr[t])
		{
			for (index -= 1; index >= 0; index--)
				free(ptr[index]);
			free(ptr);
			return (NULL);

		}

		for (l = 0; l < letters; l++)
		{
			ptr[t][l] = line[index];
			index++;
		}

		ptr[t][l] = '\0';
	}

	ptr[t] = NULL;
	ptr[t + 1] = NULL;

	return (ptr);
}
