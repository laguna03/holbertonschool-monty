#include "monty.h"

/**
 * malloc_memory_failed - erroe when malloc fails to allocate
 */

void malloc_memory_failed()
{
    dprintf(2, "Error: malloc failed\n");
    free_arguments();
    exit(EXIT_FAILURE);
}