#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*r;
	unsigned char	*p;

	i = 0;
	r = (unsigned char *)dst;
	p = (unsigned char *)src;
	while (i < n)
	{
		r[i] = p[i];
		i++;
	}
	return (r);
}
