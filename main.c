#include <stdio.h>


void greetings(char  *greet)
{
	printf("Hello %s\n",greet);
}

int main(int argc, char *argv[])
{
	for(int i = 1;i<=argc-1;i++)
	{
		greetings(argv[i]);
	}
	
		
	return 0;
}
