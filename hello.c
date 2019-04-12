#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc!=2)
	{
		printf("Mod de folosire: %s nume\n", argv[0]);
		return -1;
	}
	printf("Salut, %s!\n", argv[1]);
	return 0;
}
