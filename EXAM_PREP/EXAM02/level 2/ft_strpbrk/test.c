#include<unistd.h>
#include<stdio.h>
#include<string.h>

int main ()
{
	char x[] = "Abdurrahman";
	char y[] = "Chhhhhhhacc";
	//strpbrk(x, y);
	printf("%s\n", strpbrk(x, y));
}
