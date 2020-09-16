#include <stdio.h>
#include <stdlib.h>

struct A {
	int id;	
	long int li;
};

struct B {
	struct A a[10];
	int i[10];
	int I;
};

int main()
{
	struct B b;

	printf("%d\n", sizeof(b.a));
	printf("%d\n", sizeof(b.i));

	return 0;
}
