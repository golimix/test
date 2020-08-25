//原子操作实现
#if 0
#define	rte_mb() _mm_mfence()
#define	rte_wmb() _mm_sfence()
#define	rte_rmb() _mm_lfence()
#elif 1
#define	rte_mb()  __sync_synchronize()
#define	rte_wmb() do { asm volatile ("dmb st" : : : "memory"); } while (0)
#define	rte_rmb() __sync_synchronize()
#endif

int main()
{
	rte_mb();
}
