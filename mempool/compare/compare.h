#ifndef __compare_h
#define __compare_h 1

#include <assert.h>
#include <sys/time.h>
#include <sys/types.h>


#define NAME_LEN    32

#ifdef DEBUG
#define debug() printf("%s:%d\n",__func__, __LINE__)
#else
#define debug() 
#endif


typedef void (*method_init)();

typedef void* (*method_malloc)(size_t size);
typedef void (*method_test)(void*ptr, size_t size);
typedef void (*method_free)(void*ptr);


struct malloc_entity{
    char method_name[NAME_LEN];
    method_init initial_fn;
    method_malloc memory_alloc;
    method_test memory_test;
    method_free memory_free;

    void (*method_call_tick)(void *arg); //用于矫正函数调用花费的时间
    unsigned long int diffusec[4]; //0-total, 1-alloc, 2-test, 3-free
};


int set_alloc_size(unsigned long int alloc_size);
int set_alloc_free_cnt(unsigned long int alloc_free_cnt);

unsigned long int get_alloc_size();
unsigned long int get_alloc_free_cnt();

int malloc_entity_init(struct malloc_entity *entity, const char *name, method_init initial_fn,
                            method_malloc alloc, method_test test, method_free free);

void malloc_entity_test(struct malloc_entity *entity);
void malloc_entity_display(struct malloc_entity *entity);

inline void malloc_common_test(void*ptr, size_t size);



#endif /*<__compare_h>*/
