#include "main.h"
/**
* create_file - Creates a function that create a file.
* @filename: A pointer to the name of the file I will create.
* @text_content: A pointer to a string to writes to the file.
*
* Return: If the function fails - -1.
* Otherwise - 1.
*/
int create_file(const char *filename, char *text_content)
{
int fds, wr, lens = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (lens = 0; text_content[lens];)
lens++;
}
fds = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
wr = write(fds, text_content, lens);
if (fds == -1 || wr == -1)
return (-1);
close(fds);
return (1);
}
