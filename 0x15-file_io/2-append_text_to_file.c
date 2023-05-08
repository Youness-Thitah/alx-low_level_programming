#include "main.h"
/**
* append_text_to_file - a function that appends text at the end of a file.
* @filename: A pointer to the Name of the File.
* @text_content: String to add to the end of the File.
*
* Return: If function fails or the filename is NULL : -1.
* If the file does not exist the user lacks write permissions : -1.
* Otherwise - 1.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int op, wr, lens = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (lens = 0; text_content[lens];)
lens++;
}
op = open(filename, O_WRONLY | O_APPEND);
wr = write(op, text_content, lens);
if (op == -1 || wr == -1)
return (-1);
close(op);
return (1);
}
