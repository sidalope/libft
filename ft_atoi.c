#include <stdio.h>

// int	main(void)
// {
// 	printf("%i\n", ft_atoi(""));
// 	printf("%i\n", ft_atoi("5hj"));
// 	printf("%i\n", ft_atoi("++-+++++598567"));
// 	printf("%i\n", ft_atoi("-+++++++598567"));
// 	printf("%i\n", ft_atoi("-+++-+++598567"));
// 	printf("%i\n", ft_atoi("      -+-+-+++598567"));
// 	printf("%i\n", ft_atoi("     -+-+-+++598567dtntn"));
// 	printf("%i\n", ft_atoi("    -+-+-+++598567xndn4568568"));
// 	return (0);
// }

char	*skip_whitespace(char *str)
{
	while (*str == ' ' || *str == '\n' || *str == '\t' || 
		*str == '\v' || *str == '\f' || *str == '\r')
		str++;
	return (str);
}

int	ft_atoi(char *str)
{
	int			len;
	int			minuses;
	int			i;

	len = 0;
	minuses = 0;
	i = 0;
	if (*str)
	{
		str = skip_whitespace(str);
		while (*str == '+' || *str == '-')
		{
			if (*str == '-')
				minuses++;
			str++;
		}
		while (str[len] >= '0' && str[len] <= '9')
		{
			i = i * 10 + str[len] - '0';
			len++;
		}
		if (minuses % 2)
			i *= -1;
	}
	return (i);
}