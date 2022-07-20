
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char		*new_str;
	size_t		i;
	size_t		start;
	size_t		end;

	if (!s1)
		return (0);
	if (!set)
		return ((char *) s1);
	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (start < end && ft_strchr(set, s1[start]))
		start++;
	while (0 < end && ft_strchr(set, s1[end - 1]))
		end--;
	new_str = (char *)malloc(end - start + 1);
	if (!new_str)
		return (0);
	while (start < end)
		new_str[i++] = s1[start++];
	result[i] = '\0';
	return (result);
}
