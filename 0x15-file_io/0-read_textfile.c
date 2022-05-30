#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the stdout
 * @filename: pointer to the text in the file
 * @letters: number of letters
 * 
 * Return: the number of letters, 0 if file can't be read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, fread, fwrite;
	char *totalsize;

	totalsize = malloc(sizeof(char) * letters);
	if (totalsize == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	fread = read(file, totalsize, letters);
	if (fread == -1)
		return (0);
	fwrite = write(STDOUT_FILENO, totalsize, fread);
	if (fwrite == -1)
		return (0);
	close(file);
	free(totalsize);
	return (fwrite);
}
