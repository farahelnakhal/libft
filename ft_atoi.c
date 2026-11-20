#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int				neg;
	unsigned long	result;

	neg = 0;
	result = 0;
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		if (*nptr++ == '-')
			neg = 1;
	while (ft_isdigit(*nptr))
		result = result * 10 + (unsigned long)(*nptr++ - '0');
	if (neg)
		result = -result;
	return ((int)result);
}
