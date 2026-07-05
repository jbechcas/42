#include <unistd.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int 	size;
	int	counter;
	char	*found;

	i = 0;
	j = 0;
	size = 0;
	if(str[i] && !to_find[i])
	{
		return to_find;
	}
	while(str[i])
	{
		if(str[i] == to_find[j])
		{
			j++;
			if(to_find[j] == '\0')
			{
				return &str[i - j];
			}
		}
		else if(j > 0)
		{
			i = i - j;
			j = 0;
		}
		i++;
	}
	return NULL;
}

int	main(void)
{
	int	i = 0;
	char	*a = ft_strstr("c c d hola como","como");
	
	
	while(a[i])
	{
		write(1, &a[i], 1);
		i++;	
	}
}
