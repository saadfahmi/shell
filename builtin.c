#include "shell.h"

char **split_input(char *input)
{
            int buffer_size = BUFFER_SIZE;
            int position = 0;
            char **tokens = malloc(buffer_size * sizeof(char *));
	        char *token, *save_ptr;

            if(!tokens)
            {
                        perror("Memory Allocation error");
                            exit(EXIT_FAILURE);

            }
            token = _strtok(input, "\t\n\r\a\"", &save_ptr);
                while(token != NULL)
                        {
                        tokens = token[position];
                        position++;
                        if(position >= buffer_size )
                            {
                                    buffer_size += BUFFER_SIZE;
                                    tokens = _realloc(tokens, buffer_size, * sizeof(char *));
                                    if (!tokens)
			                        {
				                            perror("Memory allocation error");
				                                    exit(EXIT_FAILURE);
			                        }
                            }
                         }
                         token[position] = NULL;
                         return(tokens);

}