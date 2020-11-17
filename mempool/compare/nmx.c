#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "nmx_palloc.h"

static nmx_pool_t *pool = NULL;


inline void nmx_malloc_init(void*ptr)
{
   pool = nmx_create_pool(1024);
}

inline void* nmx_malloc_malloc(size_t size)
{
    return nmx_pcalloc (pool,size);
}
inline void nmx_malloc_test(void*ptr, size_t size)
{
    malloc_common_test(ptr, size);
}
inline void nmx_malloc_free(void*ptr)
{
    nmx_pfree(pool, ptr);
}

