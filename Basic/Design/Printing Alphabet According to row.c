#include <stdio.h>
int main()
{
    int i, j;
    char input ='D', alphabet = 'A';
    {
    	for(i =1;i <= (input - 'A' + 1); ++i)
    	{
    		for(j = 1;j<=i; ++j)
    		{
    			printf("%c",alphabet);
			}
			++alphabet;
			printf("\n");
		}
	}
}
