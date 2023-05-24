#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int		*str;
	int		i;

	if (start > end)
		str = (int *)malloc(sizeof(int) * (start - end) + 1);
	else
		str = (int *)malloc(sizeof(int) * (end - start) + 1);
	i = 0;
	while (start != end)
	{
		str[i++] = start;
		start += (start > end) ? -1 : 1;
	}
	str[i] = start;
	return (str);
}
/*
**int		main(void)
**{
**	int		i;
**	int		*tab;
**
**	tab = ft_range(52, 59);
**	i = 0;
**	while (i < 7)
**	{
**		printf("%d\n", tab[i]);
**		i++;
**	}
**}
*/