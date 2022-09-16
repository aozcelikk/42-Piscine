#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char *text[10];

	text[0] = "Deneme";
	text[1] = "a";
	text[2] = "Bu";
	text[3] = "ft_strjoin";
	text[4] = "com";
	text[5] = "o";
	text[6] = "Durum";
	text[7] = "\' - \'";
	text[8] = "Dur";
	text[9] = "10";

	printf("%s\n", ft_strjoin(10, text, " - "));
}
