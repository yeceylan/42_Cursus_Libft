
#include "libft.h"

static int	wordcounter(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s == '\0')
			return (i);
		while (*s != c && *s)
			s++;
		i++;
	}
	return (i);
}

static int	charcounter(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s && (*s != c))
	{
		i++;
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		retindex;

	if (!s)
		return (0);
	retindex = 0;
	ret = (char **)malloc(sizeof(char *) * wordcounter(s, c) + 1);
	if (!ret)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s == '\0')
			break ;
		ret[retindex] = ft_substr(s, 0, charcounter(s, c));
		retindex++;
		s = s + charcounter(s, c);
	}
	ret[retindex] = NULL;
	return (ret);
}

/*int	main()
{
	char **c = ft_split("ensar abimi çok seviyom", ' ');
	printf ("%s\n%s\n%s\n",c[0],c[1],c[2]);
}*/