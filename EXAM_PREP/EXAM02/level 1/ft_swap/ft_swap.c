void	ft_swap(int *a, int *b)
{
	int help = *a;
	*a = *b;
	*b = help;
}
#include<stdio.h>
int main() {
    int x = 5;
    int y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);

    // Call ft_swap to swap the values of x and y
    ft_swap(&x, &y);

    printf("After swap: x = %d, y = %d\n", x, y);


}

