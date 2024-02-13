#include "libft.h"

static int	l_countwords(char const *str, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			count++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count);
}

char	**l_split(const char *s, char c)
{
	char	**str;
	int		i;
	int		k;
	int		str_index;

	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (l_countwords(s, c) + 1));
	if (!str)
		return (NULL);
	i = 0;
	str_index = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		k = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i > k)
			str[str_index++] = l_substr(s, k, i - k);
	}
	str[str_index] = NULL;
	return (str);
}
