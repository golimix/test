#include <stdio.h>
#include <hugetlbfs.h>

//int gethugepagesizes(long pagesizes[], int n_elem);

int main()
{
	int i;
	long pagesizes[64];
	int n_elem=64;
	int ret = gethugepagesizes(pagesizes, n_elem);

	printf("gethugepagesizes ret=%d.\n");

	for(i=0;i<ret;i++){
		printf("%ld.\n", pagesizes[i]);
	}
}
