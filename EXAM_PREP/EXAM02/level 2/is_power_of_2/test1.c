#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int is_power_of_2(unsigned int n)
{
    if (n == 0)
        return 0;

    // Check if there's only one bit set to 1
    return (n & (n - 1)) == 0;
}

int main()
{
    unsigned int num = 8;
    printf("%i\n", is_power_of_2(num));
}

