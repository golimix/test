#include <sys/types.h>
#include <unistd.h>

//getgroups() returns the supplementary group IDs of the calling process in list.
int getgroups(int size, gid_t list[]);//get/set list of supplementary(额外的) group IDs

#include <grp.h>

//setgroups() sets the supplementary group IDs for the calling process. 
int setgroups(size_t size, const gid_t *list); //get/set list of supplementary(额外的) group IDs
//
