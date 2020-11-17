#include <pthread.h>

//pthread_setcancelstate, pthread_setcanceltype - set cancelability state and type
int pthread_setcancelstate(int state, int *oldstate);
//int pthread_setcanceltype(int type, int *oldtype);

//Compile and link with -pthread.

