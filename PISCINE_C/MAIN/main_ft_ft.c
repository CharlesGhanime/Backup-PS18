int     main ()
{
	int *nbr;
	int x;

	nbr = &x;
	ft_ft(nbr);
	printf("%d \n", x);
	printf("%d \n", *nbr);
	printf("%d \n", nbr);
	printf("%d \n", &x);
	printf("%d \n", &nbr);

	return (0);
}
