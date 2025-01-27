#include "shell.h"


int _strcmp(const char *s1, const char *s2)
{
            while(*s1 != '\0' || *s2 != '\0')
            {
                        if(*s1 != *s2)
                                return(*s1 - *s2);
                        s1++;
                        s2++;

                        
            }

            return(0);

}

int _strncmp(const char *s1, const char *s2, size_t n)
{
            while (n > 0 && (*s1 != '\0' || *s2 != '\0'))
            {
                        if(*s1 != *s2)
                        {
                                return(*s1- *s2)
                        }
                        s1++;
                        s2++;
                        n--;


            }

            return(0);

}
char *_strncpy(char *dest, const char *src, size_t n)
{
	char *original_dest = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (original_dest);
}


char *_strcpy(char *dest, const char *src)
{
            char *original_dest = dest;

            while(*src != '\0')
            {
                        *dest = *src;
                        dest++;
                        src++;

            }

            *dest = '\0';
            return(original_dest);


}

size_t _strlen(const char *str)
{
            size_t len = 0;
            while(str[len] != '\0')
            {
                    len++;

            }
            
            return(len);
}