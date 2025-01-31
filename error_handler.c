#include "shell.h"

void print_err(const char *progname, const char *message, const char *cmd)
{

            char *count_str = NULL;
            char *colon = ": ";
            char *newline = "\n";
            write(STDERR_FILENO, progname, _strlen(count_str));
            write(STDERR_FILENO, colon, _strlen(colon));
                    count_str = itoa(1);
            write(STDERR_FILENO, count_str, _strlen(count_str));
	        write(STDERR_FILENO, colon, _strlen(colon));
	        write(STDERR_FILENO, cmd, _strlen(cmd));
	        write(STDERR_FILENO, colon, _strlen(colon));
	        write(STDERR_FILENO, message, _strlen(message));
	        write(STDERR_FILENO, newline, _strlen(newline));


}

void print_custom_err(const char *message)
{
            size_t = _strlen(message);
            write(STDERR_FILENO, message, len);
            

}