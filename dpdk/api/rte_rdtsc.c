#include <stdio.h>
#include <stdint.h>
#include <fcntl.h>


#define RTE_STD_C11
#define CYC_PER_10MHZ 1E7

static inline uint64_t
rte_rdtsc(void)
{
	union {
		uint64_t tsc_64;
		RTE_STD_C11
		struct {
			uint32_t lo_32;
			uint32_t hi_32;
		};
	} tsc;

#ifdef RTE_LIBRTE_EAL_VMWARE_TSC_MAP_SUPPORT
	if (unlikely(rte_cycles_vmware_tsc_map)) {
		/* ecx = 0x10000 corresponds to the physical TSC for VMware */
		asm volatile("rdpmc" :
		             "=a" (tsc.lo_32),
		             "=d" (tsc.hi_32) :
		             "c"(0x10000));
		return tsc.tsc_64;
	}
#endif

	asm volatile("rdtsc" :
		     "=a" (tsc.lo_32),
		     "=d" (tsc.hi_32));
	return tsc.tsc_64;
}


int main()
{
	uint64_t tsc_hz_start = rte_rdtsc();

    sleep(1);
	uint64_t tsc_hz_end = rte_rdtsc();
    
	printf("CYC_PER_10MHZ   = %ld\n", CYC_PER_10MHZ);
	printf("CYC_PER_10MHZ   = %x\n", CYC_PER_10MHZ);
	printf("tsc_hz          = %ld\n",tsc_hz_end - tsc_hz_start);
}

