
#include <signal.h>
#include <time.h>

int timer_create(clockid_t clockid, struct sigevent *sevp,
                 timer_t *timerid);

//Link with -lrt.
                 
SYSCALL_DEFINE3(timer_create, const clockid_t, which_clock,
     struct sigevent __user *, timer_event_spec,
     timer_t __user *, created_timer_id)
{
 if (timer_event_spec) {
     sigevent_t event;

     if (copy_from_user(&event, timer_event_spec, sizeof (event)))
         return -EFAULT;
     return do_timer_create(which_clock, &event, created_timer_id);
 }
 return do_timer_create(which_clock, NULL, created_timer_id);
}

#ifdef CONFIG_COMPAT
COMPAT_SYSCALL_DEFINE3(timer_create, clockid_t, which_clock,
            struct compat_sigevent __user *, timer_event_spec,
            timer_t __user *, created_timer_id)
{
 if (timer_event_spec) {
     sigevent_t event;

     if (get_compat_sigevent(&event, timer_event_spec))
         return -EFAULT;
     return do_timer_create(which_clock, &event, created_timer_id);
 }
 return do_timer_create(which_clock, NULL, created_timer_id);
}
#endif

