#include <stdio.h>

int main()
{

char	palavra1[] = {"camarote"};
char 	palavra2[] = {"camarote"};
		
		int i =  0;

	while (palavra1[i] != '\0' && palavra2[i] != '\0')
	{
		if (palavra1[i] != palavra2[i])
		{
			printf ("As palavras sao diferentes.\n");
			return 1;
		} 
		else 
		{
			i++;
		}
		
	}
	
	printf ("As palavras sao iguais.\n");
	return 0;
	
}
 
