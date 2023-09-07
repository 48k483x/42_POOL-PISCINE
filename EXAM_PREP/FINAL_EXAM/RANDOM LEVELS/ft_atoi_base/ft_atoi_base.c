int is_blanc(char c)
{
	while (c <= 32)
		return (1);
	return (0);
}

int is_valid(char c, int base)
{
	char digits[17] = "0123456789abcdef";
	char digits1[17] = "0123456789ABCDEF";
	while (base--)
		if (digits[base] == c || digits1[base] == c)
			return (1);
	return (0);
}

int value_for(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return  (c - 'A' + 10);
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int result = 0;
	int sign;
	while (is_blanc(*str))
		str++;
	sign = (*str == '-') ? -1 : 1;
	(*str == '-' || *str == '+') ? ++str : 0;
	while is_valid(*str, str_base)
		result = result * str_base + value_for(*str++);
	return (result * sign);
}
