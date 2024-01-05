#include "monty.h"

/**
 * initialization_arguments - initializes a pointer
 */

void initialization_arguments()
{
    arguments = malloc(sizeof(va_argtmp));
    if (arguments == NULL)
    {
        malloc_memory_failed();
    }

    arguments -> stream = NULL;
    arguments -> line_str =NULL;

}