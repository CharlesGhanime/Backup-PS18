#include <unistd.h>
#include <stdio.h>

int		main()
{
	int i;
	i = 0;
	while (i > 2)
	{
		printf("Je suis un pd qui ne verouille pas");
		i++;
	}
}
