//pthread_attr_setinheritsched,  pthread_attr_getinheritsched  -  set/get  inherit-scheduler  attribute  in
//thread attributes object
//
//SYNOPSIS
#include <pthread.h>

int pthread_attr_setinheritsched(pthread_attr_t *attr,
                                int inheritsched);
int pthread_attr_getinheritsched(pthread_attr_t *attr,
                                int *inheritsched);

//Compile and link with -pthread.

