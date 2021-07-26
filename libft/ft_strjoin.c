#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*r;

	if (!s1 || !s2)
		return (NULL);
	r = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!r)
		return (NULL);
	i = 0;
	j = 0;
	j = 0;
	while (s1[j])
		r[i++] = s1[j++];
	j = 0;
	while (s2[j])
		r[i++] = s2[j++];
	r[i] = 0;
	return (r);
}
