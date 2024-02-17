#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*arr;
	int	*ptr;
	int	value;

	size = max - min;
	if (min >= max || max > INT_MAX)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc(size * sizeof(int));
	if (arr == NULL)
	{
		*range = NULL;
		return (0);
	}
	ptr = arr;
	value = min;
	while (value < max)
	{
		*ptr = value;
		ptr++;
		value++;
	}
	*range = arr;
	return (size);
}

int	main(void)
{
	int min = -100;
	int max = 100;
	int *arr;
	int size;

	size = ft_ultimate_range(&arr, min, max);

	if (arr == NULL)
	{
		printf("Invalid input: min value is greater than or equal to max value.\n");
		return (0);
	}

	printf("Array values: ");
	int i;
    i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
        i++;
	}
	printf("\n");

	free(arr);

	return (0);
}