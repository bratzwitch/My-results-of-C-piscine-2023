#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*dup;
	char	*dup_offset;

	src_len = strlen(src);
	dup = (char *)malloc(sizeof(char) * src_len + 1);
	if (dup == NULL)
		return ((char *)NULL);
	dup_offset = dup;
	while (*src != '\0')
	{
		*dup_offset = *src;
		dup_offset++;
		src++;
	}
	*dup_offset = '\0';
	return (dup);
}
int	main(void)
{
	char original[12] = "Hii dude";
	char *duplicate;
	int o_len, d_len;

	duplicate = ft_strdup(original);
	o_len = strlen(original);
	d_len = strlen(duplicate);

	printf("Original String: '%s' (%d)\n", original, o_len);
	printf("Duplicate string: '%s' (%d)\n", duplicate, d_len);

	return (0);
}