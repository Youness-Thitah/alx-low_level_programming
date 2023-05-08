#include "main.h"
#include <stdlib.h>
/**
* read_textfile- Read the text file and print to STDOUT.
* @filename: being read
* @letters: number of letters to be read
* Return: w- returns the actual number of letters it could read and print
*        0 when the file can not be opened or read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t md;
ssize_t w;
ssize_t t;
md = open(filename, O_RDONLY);
if (md == -1)
return (0);
buf = malloc(sizeof(char) * letters);
t = read(md, buf, letters);
w = write(STDOUT_FILENO, buf, t);
free(buf);
close(md);
return (w);
}
