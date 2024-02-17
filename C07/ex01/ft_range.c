#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*arr;
	int	*ptr;
	int	value;

	size = max - min;
	arr = (int *)malloc(size * sizeof(int));
	ptr = arr;
	value = min;
	if (min >= max || max > INT_MAX)
	{
		return (NULL);
	}
	while (value < max)
	{
		*ptr = value;
		ptr++;
		value++;
	}
	return (arr);
}
int	main(void)
{
	int min = 45;
	int max = 50;

	int *arr = ft_range(min, max);

	if (arr == NULL)
	{
		printf("Invalid input: min value is greater than or equal to max value.\n");
		return (0);
	}

	printf("Array values: ");
	int i;
	i = 0;
	while (i < max - min)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");

	free(arr);

	return (0);
}