#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 3000;
	int intalloc = (n * sizeof(int));
	int charstaralloc = (n * sizeof(char*));
	int* intptr = (int*)malloc(intalloc);
	char** charstarptr = (char**)malloc(charstaralloc);
	printf("Size of intptr: %d bytes\nAlloc of intptr: %d bytes\nSize of charstarptr: %d bytes\nAlloc of charstarptr: %d byte\n",
	       sizeof(intptr),intalloc,sizeof(charstarptr),charstaralloc);
	printf("intptr[2999] ==>%d<==\nintptr[3000] ==>%d<==\n",intptr[n-1],intptr[n]);
	charstarptr[0] = "entry_one";
	printf("intptr[2999] ==>%d<==\nintptr[3000] ==>%d<==\ncharstarptr[0] ==>%s<==\n",intptr[n-1],intptr[n],charstarptr[0]);

	return 0;
}