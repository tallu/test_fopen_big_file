#include <stdio.h>

int main()
{
	FILE *f = NULL;
	const char *fname = "big_file";

	printf("sizeof(off_t) is %d \n", sizeof(off_t));

	if(NULL == (f = fopen(fname, "rb")))
	{
		perror("failed to open big_file");
		return -1;
	}

	printf("%s opened successfully \n", fname);
	return 0;
}

