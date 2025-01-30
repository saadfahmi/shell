#include "shell.h"


char *get_env_var_value(const char *var_name)
{
            char *var_value = NULL;
            if(var_name[0] == '?')
                    var_value = _itoa(0);
            else if(var_name[0] == '$')
                    var_value = _itoa(getpid());
            else
                var_value = _getenv(var_name);

                return(var_value);
}

void replace_env_vars(char *input)
{
           size_t var_value_length = _strlen(var_value);
	       size_t remaining_length = _strlen(end);

	        _memmove(*start + var_value_length, end, remaining_length + 1);
	        _memcpy(*start, var_value, var_value_length);
	                *start += var_value_length;

}
void replace_env_vars(char *input)
{
	char *start = input;
	char *end = input;
	char *dollar_sign, *var_name, *var_value;

	while ((dollar_sign = _strchr(start, '$')) != NULL)
	{
		end = dollar_sign;
		while (*end != '\0' && (*end == '$'
					|| my_isalnum(*end)
					|| *end == '_'))
		{
			end++;
		}
		if (end > dollar_sign + 1)
		{
			var_name = dollar_sign + 1;
			var_value = get_env_var_value(var_name);
			if (var_value != NULL)
				    replace_env_var(&start, var_value, end);
		
			else
				start = end;
			
		}
		else
			start = end;
	
	}
}


void handle_special_env(const char *name, const char *progname)
{
	char *value = _getenv(name);

	if (value != NULL)
		_puts(value);
	
	else
		print_err(progname, "not found", name);

}


char *_getenv(const char *name)
{
	size_t name_len = _strlen(name);
	char **env;

	if (name == NULL || *name == '\0')
	{
		return (NULL);
	}
	for (env = environ; *env != NULL; env++)
	{
		if (_strncmp(name, *env, name_len) == 0
				&& (*env)[name_len] == '=')
		{
			return (*env + name_len + 1);
		}
	}
	return (NULL);
}