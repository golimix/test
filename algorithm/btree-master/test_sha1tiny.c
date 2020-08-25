#include <stdio.h>
#include <string.h>
#include "sha1tiny.h"

static const char test0[] = "The quick brown fox jumps over the lazy dog";
static const unsigned char test0_digest[SHA1_DIGEST_LENGTH] = {
	0x2f, 0xd4, 0xe1, 0xc6, 0x7a, 0x2d, 0x28, 0xfc, 0xed, 0x84, 0x9e, 0xe1, 0xbb, 0x76, 0xe7, 0x39, 0x1b, 0x93, 0xeb, 0x12,
};
static unsigned char test1[] = {
	0x83, 0xb8, 0x08, 0xe5, 0xcd, 0x85, 0xbf, 0xe1, 0x5c, 0x27, 0x7c, 0x6a,
	0x98, 0x79, 0xa0, 0x22, 0xf5, 0xaf, 0xab, 0xff, 0x86, 0x05, 0xf4, 0x8e,
	0xc0, 0x32, 0x80, 0x37, 0xb2, 0xd6, 0xe9, 0x11, 0xb8, 0x68, 0xd0, 0x7d,
	0xe6, 0x50, 0x28, 0x0b, 0xcb, 0x1e, 0x69, 0x53, 0xe9, 0x10, 0x83, 0xdf,
	0x59, 0x54, 0xda, 0x73, 0x22, 0xa6, 0xd0, 0x82, 0x38, 0x80, 0x02, 0xb4,
	0x27, 0x63, 0xd2, 0xf6, 0x01
};
static const size_t test1_len = 65;
static const unsigned char test1_digest[] = {
	0x68, 0xb2, 0x1d, 0x8f, 0x56, 0x1a, 0xd0, 0x8e, 0x68, 0x3e, 0x61, 0x95, 0x4c, 0x66, 0xac, 0x53, 0xf1, 0x24, 0x56, 0xa7
};
static unsigned char test2[] = {
	0x54, 0x91, 0x06, 0x9b, 0x24, 0x00, 0x8b, 0xfd, 0x9e, 0x4a, 0x52, 0xb5
};
static const size_t test2_len = 12;
static const unsigned char test2_digest[] = {
	0xc8, 0xd9, 0x2c, 0xb3, 0x81, 0x97, 0x1d, 0xc8, 0xe7, 0xa4, 0x1a, 0xfd, 0xb7, 0x9e, 0x0f, 0x4f, 0x86, 0x76, 0xa0, 0xef
};
static unsigned char test3[] = {
	0xc2, 0xba, 0xb3, 0x02, 0xfb, 0x08, 0x58, 0x87, 0xad, 0x23, 0xc7, 0x4a,
	0xca, 0x45, 0x40, 0xc2, 0xa4, 0x64, 0x96, 0xae, 0x40, 0x41, 0x16, 0x0e,
	0x49, 0xd7, 0xdc, 0x53, 0x7e, 0xc6, 0x5e, 0xa2, 0x1a, 0x67, 0x35, 0x0a,
	0x4d, 0x4a, 0xdc, 0x9a, 0x78, 0xf4, 0xd6, 0x69, 0xb6, 0x4e, 0xb1, 0x31,
	0x92, 0x8b, 0xbe, 0xcd, 0x0b, 0x4f, 0x83, 0x0f, 0xe1, 0x2e, 0x0e, 0x8c,
	0xf7, 0x9e, 0xf1
};
static const size_t test3_len = 63;
static const unsigned char test3_digest[] = {
	0xe6, 0x11, 0x4e, 0xea, 0x22, 0x13, 0x57, 0xe3, 0x48, 0x42, 0x7f, 0x5e, 0x5d, 0x6e, 0xc3, 0x59, 0x4f, 0x3d, 0x50, 0x7b
};
static unsigned char test4[] = {
	0x99, 0xd3, 0xf5, 0x77, 0x0f, 0x22, 0xc3, 0x34, 0x46, 0xb1, 0x4c, 0x69,
	0x08, 0x9b, 0x22, 0x5b, 0x88, 0xbf, 0x10, 0x9a, 0xe4, 0x86, 0x8c, 0xa4,
	0xb3, 0x5e, 0xa7, 0x1a, 0x36, 0xc8, 0x92, 0xd5, 0x06, 0x62, 0xd1, 0x65,
	0x22, 0xa9, 0x33, 0xe1, 0x5a, 0x29
};
static const size_t test4_len = 42;
static const unsigned char test4_digest[] = {
	0x0b, 0x0f, 0x2b, 0xce, 0xf8, 0x44, 0x8f, 0xfe, 0x53, 0xd2, 0x25, 0x40, 0x0d, 0xa5, 0x07, 0x17, 0x84, 0x3a, 0xab, 0x33
};

static void sha1_print_digest(const unsigned char *md)
{
	unsigned i;

	for(i = 0; i < SHA1_DIGEST_LENGTH; i++) {
		printf("%02X", md[i]);

		if(i < SHA1_DIGEST_LENGTH - 1) printf(":");
	}

	printf("\n");
}

static int sha1_test(void)
{
	struct {
		const void *data;
		size_t len;
		const unsigned char *digest;
	} test[] = {
		{ test0, strlen(test0), test0_digest },
		{ test1, test1_len, test1_digest },
		{ test2, test2_len, test2_digest },
		{ test3, test3_len, test3_digest },
		{ test4, test4_len, test4_digest },
	};
	unsigned char digest[SHA1_DIGEST_LENGTH];
	unsigned i;

	printf("Running %zd tests.\n", sizeof test / sizeof * test);

	for(i = 0; i < sizeof test / sizeof * test; i++) {
		memset(digest, 0, sizeof digest);

		if(!sha1(test[i].data, test[i].len, digest)) {
			printf("failed.\n");
			return 0;
		}

		/* TODO: dump in a clean way
		printf("test%d[%d] = \"%s\"\n", i, test[i].len, test[i].data);
		*/

		printf("test%d length = %zd\n", i, test[i].len);

		printf("calculated : ");
		sha1_print_digest(digest);

		printf("known      : ");
		sha1_print_digest(test[i].digest);

		printf("test%d: %s\n", i, memcmp(digest, test[i].digest, SHA1_DIGEST_LENGTH) ? "FAILED" : "PASSED");
	}

	return 0;
}

int main()
{
	return sha1_test() ? 0 : 1;
}