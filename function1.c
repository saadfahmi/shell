#include "shell.h"
void _putchar(char c)
{
           write(STDOUT_FILENO, &c, 1);

}

int _puts(const char * str)
{ 
            int characters_written = 0;
             while(*str != '\0')
             { 
                        _putchar(*str);
                        characters_written++;
                        str++;


             }
             _putchar("\n");
             characters_written++;
             return(characters_written);


}

int _atoi(const char *str)
{
            int result = 0;
            int sign = 1;
            while(*str == '' || (*str >= '\t' && str <= '\r'))
                str++;
            if(*str == '-' || *str == '+')
            {
                    if(*str == '-')
                        sign = -1;

                    str++;

                
            }

            while (*str >= '0' && *str <= '9')

	             {
		                result = result * 10 + (*str - '0');
		                str++;

	            }
	            return (result * sign);

}


char *_strcat(char *dest, const char src)
{

            char *original_dest = dest;
            while(*dest != '\0')
            {
                        dest++;

            }
            while (*src != '\0')
            {
                        *dest = *src;
                        dest++;
                        src++;


            }
            *dest = '\0';
            return(original_dest);

}
    



