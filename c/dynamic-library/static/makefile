

all:test

libadd.so:
	gcc -fpic -shared add.c -o libadd.so
#	cp libadd-test.so /usr/lib64

test:libadd.so
	gcc  test.c -o test -I ./ libadd.so

clean:
	rm -f test libadd.so
