int     max(int* tab, unsigned int len)
{
        unsigned int i;
        int result;

        i = 0;
        result = 0;
        if (len == 0)
                return (0);
        while (i < len)
        {
                if (tab[i] <= tab[i + 1])
                        result = tab[i+1];
                i++;
        }
        return (result);
}
#include<stdio.h>
int main ()
{
	int tabs[] = {1 , 5 , 6 , 100, 905 , 100 , 2000};
	unsigned int len = 7;
	printf("%d\n", max(tabs, len));
}
