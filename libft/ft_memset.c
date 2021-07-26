#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	cn;
	size_t			i;

	p = (unsigned char *) s;
	i = 0;
	cn = (unsigned char) c;
	while (i < n)
	{
		p[i] = cn;
		i++;
	}
	return (p);
}
