
  
#include "main.h"

/**
* read_textfile - fonction
* @filename: para
* @letters: para
* Return: ssize_t
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *str;

	if (filename == NULL)
		return (0);
	str = malloc(sizeof(char) * letters);
	if (str == NULL)
		return (0);
	o = open(filename, O_RDWR);
	if (o == -1)
	{
		free(str);
		return (0);
	}
	r = read(o, str, letters);
	if (r == -1)
	{
		free(str);
		return (0);
	}
	w = write(STDOUT_FILENO, str, r);
	if (w == -1)
	{
		free(str);
		return (0);
	}
	close(o);
	free(str);
	return (w);
}
