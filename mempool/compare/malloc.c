#include <malloc.h>

#include "compare.h"


inline void sys_glibc_malloc_init(void*ptr)
{

}

inline void* sys_glibc_malloc(size_t size)
{
    return malloc(size);
}
inline void sys_glibc_test(void*ptr, size_t size)
{
    malloc_common_test(ptr, size);
}
inline void sys_glibc_free(void*ptr)
{
    free(ptr);
}

