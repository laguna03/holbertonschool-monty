#include "monty.h"

/**
 * free_arguments - Frees the allocated memory for va_argtmp structure.
 */
void free_arguments()
{
    if (arguments != NULL)
    {
        
        if (arguments->stream != NULL)
        {
            fclose(arguments->stream);
            arguments->stream = NULL;
        }

        if (arguments->line_str != NULL)
        {
            free(arguments->line_str);
            arguments->line_str = NULL;
        }

        free(arguments);
        arguments = NULL;
    }
}
