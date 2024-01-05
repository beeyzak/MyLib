
int ft_atoi(const char *str){
	int i;
	int sign;
	int res;

    i = 0;
	sign = 1;
	res = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
			i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
    return (sign * res);
}

/*int main() {
    const char *str = "12345";
    int num = ft_atoi(str);

    printf("Dönüştürülen sayı: %d\n", num);

    return 0;
}*/