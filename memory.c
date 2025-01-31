#include "sehll.h"

char *_strdup(const char *str)
{
            size_t length = _strlen(str);

            char *new_str = (char *)malloc((length + 1) * sizeof(char));
            if(new_str != NULL)
                    _strcpy(new_str, str);


            return(new_str);
             
}

void *_realloc(void *ptr, size_t size)
{
            size_t old_size, copy_size;
            void *new_ptr;

            if(ptr == NULL)
                    return(malloc(size));
            if(size == 0)
            {
                    free(ptr);
                    return(NULL);

            }
            new_ptr = malloc(size);
            if(new_ptr != NULL)
            {
                    old_size = _strlen((const char *)ptr);
		            copy_size = old_size < size ? old_size : size;
		            _strncpy((char *)new_ptr, (const char *)ptr, copy_size);
		                free(ptr);

            }
            return(new_ptr);

}
void _memcpy(char *dest, const char *src, size_t n)
{
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
}


void free_memory(char *input, char **args)
{
	free(input);
	free(args);
}