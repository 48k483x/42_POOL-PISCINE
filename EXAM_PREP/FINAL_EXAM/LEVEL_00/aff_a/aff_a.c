#include<unistd.h>

int main (int argc, char **argv)
{
	(void)argc;
	(void)argv;
	 write(1, "a\n", 2);
}
