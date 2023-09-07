#include <stdlib.h>

int			*ft_range(int start, int end)
{
	int			*range;
	int			i;

	if (start > end)
		range = (int*)malloc(sizeof(int) * (start - end));
	else
		range = (int*)malloc(sizeof(int) * (end - start + 1));
	i = 0;
	while (start != end)
	{
		range[i++] = start;
		start += (start > end) ? -1 : 1;
	}
	range[i] = start;
	return (range);
}

#include <stdio.h>
#include <stdlib.h>

int *ft_range(int start, int end);

int main() {
    int *result;
    int i;

    // Test case 1: (1, 3)
    result = ft_range(1, 3);
    printf("(1, 3): ");
    for (i = 0; i < 3; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    free(result);

    // Test case 2: (-1, 2)
    result = ft_range(-1, 2);
    printf("(-1, 2): ");
    for (i = 0; i < 4; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    free(result);

    // Test case 3: (0, 0)
    result = ft_range(0, 0);
    printf("(0, 0): %d\n", result[0]);
    free(result);

    // Test case 4: (0, -3)
    result = ft_range(0, -3);
    printf("(0, -3): ");
    for (i = 0; i < 4; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    free(result);

    return 0;
}

