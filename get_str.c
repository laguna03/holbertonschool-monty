#include "monty.h"

/**
 * get_str_failed - erroe when reading a file
 * @ filename: file that failed to open.
 */
void get_str_failed(char *filename)
{
    dprintf(stderr, "Error: Can’t open file file %s\n", filename);
    free_arguments();
    exit(EXIT_FAILURE);
}

/**
 * get_str - get the stream 
 * @ filename: name of the file
 */
void get_str(char *filename)
{
    int fn;

    fn = open(filename, O_RDONLY);
    if (fn == -1)
    {
        get_str_failed(filename);
    }

    arguments -> stream = fdopen(fn, 'r');
    if (arguments -> stream == NULL)
    {
        close(fn);
        get_str_failed(filename);
    }
}
