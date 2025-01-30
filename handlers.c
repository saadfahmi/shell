#include "shell.h"

void execute_echo(char **args)
[
            if(args[1] != NULL)
            {
                        char *output = args[1];
                        replace_env_var(output):
                        _puts(output);
                    
            }
            else
                    _putchar('\n');

]
void handle_exit(char **args)
{
            int exit_stat;

            if(args[1] != NULL)
            {
                    exit_stat = _atoi(args[1]);
                    exit(exit_stat);


            }
            else        
                exit(0);

}

void handle_env(void)
{
                char **env = environ;
                int i;
                i = 0;
                while(env[i] != NULL)
                {
                            _puts(env[i]);
                            i++;
                }
}

char *read_line(void)
{
                int buffer_size = BUFFER_SIZE;
                int position = 0;
                char *buffer = malloc(buffer_size * sizeof(char));

                int c;
                
	if (!buffer)
	{
		perror("Memory allocation error");
		exit(EXIT_FAILURE);
	}
	while (1)
	{
		c = my_getchar();

		if (c == EOF || c == '\n')
		{
			if (c == EOF && position == 0)
			{
				free(buffer);
				return (NULL);
			}
			buffer[position] = '\0';
			return (buffer);
		}
		buffer[position] = c;
		position++;
		if (position >= buffer_size)
		{
			buffer_size += BUFFER_SIZE;
			buffer = _realloc(buffer, buffer_size * sizeof(char));
			if (!buffer)
			{
				perror("Memory allocation error");
				exit(EXIT_FAILURE);
			}
		}
	}
}