#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	l1;
	size_t	l2;
	char	*joined;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	joined = malloc(l1 + l2 + 1);
	if (!joined)
		return (NULL);
	ft_memcpy(joined, s1, l1);
	ft_memcpy(joined + l1, s2, l2 + 1);
	return (joined);
}
