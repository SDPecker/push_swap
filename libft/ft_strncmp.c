#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!n)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && i < n - 1 && s1[i] && s2[i])
		i++;
	if (!ft_isprint(s1[i]) && !ft_isprint(s2[i]) && s1[i] != s2[i])
		return (1);
	return ((int)(s1[i] - s2[i]));
}
