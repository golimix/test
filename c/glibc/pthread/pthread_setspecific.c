#include <pthread.h>

void* pthread_getspecific(pthread_key_t key);
	//返回：指向线程特定数据的指针（有可能是个空指针）
int pthread_setspecific(pthread_key_t key, const void *value);
	//返回：若成功则为0，若出错则为正的Exxx值  
	

/**
 * pthread_setspecific
 *
 * 		使用该函数可以为指定线程特定数据键设置线程特定绑定。
 *
 */
#include <malloc.h>
#include <pthread.h>
#include <stdio.h>
/* The key used to associate a log file pointer with each thread. */
static pthread_key_t thread_log_key;
/* Write MESSAGE to the log file for the current thread. */
void write_to_thread_log (const char* message)
{
	FILE* thread_log = (FILE*) pthread_getspecific (thread_log_key);
	fprintf (thread_log, "%s\n", message);
}
/* Close the log file pointer THREAD_LOG. */
void close_thread_log (void* thread_log)
{
	fclose ((FILE*) thread_log);
}
void* thread_function (void* args)
{
	char thread_log_filename[20];
	FILE* thread_log;
	/* Generate the filename for this thread’s log file. */
	sprintf (thread_log_filename, "thread%d.log", (int) pthread_self ());
	/* Open the log file. */
	thread_log = fopen (thread_log_filename, "w");
	/* Store the file pointer in thread-specific data under thread_log_key. */
	pthread_setspecific (thread_log_key, thread_log);
	write_to_thread_log ("Thread starting.");
	/* Do work here... */
	return NULL;
}
int main ()
{
	int i;
	pthread_t threads[5];
	/* Create a key to associate thread log file pointers in
	 * thread-specific data. Use close_thread_log to clean up the file
	 * pointers. */
	pthread_key_create (&thread_log_key, close_thread_log);
	/* Create threads to do the work. */
	for (i = 0; i < 5; ++i)
		pthread_create (&(threads[i]), NULL, thread_function, NULL);
	/* Wait for all threads to finish. */
	for (i = 0; i < 5; ++i)
		pthread_join (threads[i], NULL);
	return 0;
}



