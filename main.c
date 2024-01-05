#include "monty.h"


int main(int argc, char **argv)
{
    size_t n = 0;

    (void) argv;
    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }
    initialization_arguments();
    get_str(argv[1]);

    while (getline(&arguments->line_str, &n, arguments->stream) != -1)
    {
        printf("%s", arguments->line_str);
    }
    

    return (0);
}
