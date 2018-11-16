#include <stdio.h>

int main()
{
	FILE *f = NULL;
	const char *fname = "big_file";

	if(NULL == (f = fopen(fname, "rb")))
	{
		perror("failed to open big_file");
		return -1;
	}

	printf("%s opened successfully \n", fname);
	return 0;
}

