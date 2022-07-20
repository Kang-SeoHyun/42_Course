
#include "libft.h"

static void	ft_strcat(char *dest, const char *src)
{
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
}

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	s_len;

	if (!s1 || !s2)
		return (0);
	s_len = ft_strlen(s1) + ft_strlen(s2);
	new_str = (char *)malloc(sizeof(char) * (s_len + 1));
	if (!new_str)
		return (0);
	new_str[0] = '\0';
	ft_strcat(new_str, s1);
	ft_strcat(new_str, s2);
	return (new_str);
}