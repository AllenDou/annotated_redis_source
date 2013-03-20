static inline _Bool arenas_tsd_boot(void) { 
		if (arenas_cleanup != malloc_tsd_no_cleanup) { 
				if (pthread_key_create(&arenas_tsd, arenas_cleanup) != 0) 
						return (1); 
		} 
		arenas_booted = 1; 
		return (0); 
} 
static inline arena_t ** arenas_tsd_get(void) { 
		do { 
				if (config_debug && !(arenas_booted)) { 
						malloc_printf( "<jemalloc>: %s:%d: Failed assertion: \"%s\"\n", __FILE__, __LINE__, "arenas_booted");
						abort(); 
				} 
		} while (0); 
		return (&arenas_tls); 
}

static inline void arenas_tsd_set(arena_t * *val) {
		do { 
				if (config_debug && !(arenas_booted)) { 
						malloc_printf( "<jemalloc>: %s:%d: Failed assertion: \"%s\"\n", __FILE__, __LINE__, "arenas_booted"); 
						abort(); 
				} 
		} while (0); 
		arenas_tls = (*val); 
		if (arenas_cleanup != malloc_tsd_no_cleanup) { 
				if (pthread_setspecific(arenas_tsd, (void *)(&arenas_tls))) { 
						malloc_write("<jemalloc>: Error" " setting TSD for ""arenas""\n"); 
						if (opt_abort) 
								abort(); 
				} 
		} 
}
__thread arena_t * __attribute__((tls_model("initial-exec"))) arenas_tls = ((void *)0);  
pthread_key_t arenas_tsd;
_Bool arenas_booted = 0;

------------------------------------------
static inline _Bool tcache_tsd_boot(void) { 
		if (tcache_thread_cleanup != malloc_tsd_no_cleanup) { 
				if (pthread_key_create(&tcache_tsd, tcache_thread_cleanup) != 0) 
						return (1); 
		} 
		tcache_booted = 1; 
		return (0); 
} 

static inline tcache_t * * tcache_tsd_get(void) { 
		do { 
				if (config_debug && !(tcache_booted)) { 
						malloc_printf( "<jemalloc>: %s:%d: Failed assertion: \"%s\"\n", __FILE__, __LINE__, "tcache_booted"); 
						abort(); 
				} 
		} while (0); 
		return (&tcache_tls); 
} 

static inline void tcache_tsd_set(tcache_t * *val) { 
		do { 
				if (config_debug && !(tcache_booted)) {
						malloc_printf( "<jemalloc>: %s:%d: Failed assertion: \"%s\"\n", __FILE__, __LINE__, "tcache_booted"); 
						abort(); 
				} 
		} while (0); 
		tcache_tls = (*val); 
		if (tcache_thread_cleanup != malloc_tsd_no_cleanup) { 
				if (pthread_setspecific(tcache_tsd, (void *)(&tcache_tls))) { 
						malloc_write("<jemalloc>: Error" " setting TSD for ""tcache""\n"); 
						if (opt_abort) 
								abort(); 
				}
		}
}

extern __thread tcache_t * tcache_tls; 
extern pthread_key_t tcache_tsd; 
extern _Bool tcache_booted;

static inline _Bool thread_allocated_tsd_boot(void) {
		if (malloc_tsd_no_cleanup != malloc_tsd_no_cleanup) { 
				if (pthread_key_create(&thread_allocated_tsd, malloc_tsd_no_cleanup) != 0) 
						return (1); 
		} 
		thread_allocated_booted = 1;
		return (0);
}
static inline thread_allocated_t * thread_allocated_tsd_get(void) {
		do {
				if (config_debug && !(thread_allocated_booted)) {
						malloc_printf( "<jemalloc>: %s:%d: Failed assertion: \"%s\"\n", __FILE__, __LINE__, "thread_allocated_booted");
						abort(); 
				}
		} while (0);
		return (&thread_allocated_tls); 
}
static inline void thread_allocated_tsd_set(thread_allocated_t *val) {
		do {
				if (config_debug && !(thread_allocated_booted)) { 
						malloc_printf( "<jemalloc>: %s:%d: Failed assertion: \"%s\"\n", __FILE__, __LINE__, "thread_allocated_booted");
						abort();
				} 
		}while (0);
		thread_allocated_tls = (*val);
		if (malloc_tsd_no_cleanup != malloc_tsd_no_cleanup) { 
				if (pthread_setspecific(thread_allocated_tsd, (void *)(&thread_allocated_tls))) {
						malloc_write("<jemalloc>: Error" " setting TSD for ""thread_allocated""\n");
						if (opt_abort) 
								abort(); 
				}
		}
}

static inline _Bool tcache_enabled_tsd_boot(void){ 
		if (malloc_tsd_no_cleanup != malloc_tsd_no_cleanup) { 
				if (pthread_key_create(&tcache_enabled_tsd, malloc_tsd_no_cleanup) != 0) 
						return (1); 
		} 
		tcache_enabled_booted = 1;
		return (0); 
} 
static inline tcache_enabled_t * tcache_enabled_tsd_get(void) { 
		do { 
				if (config_debug && !(tcache_enabled_booted)) {
						malloc_printf( "<jemalloc>: %s:%d: Failed assertion: \"%s\"\n", __FILE__, __LINE__, "tcache_enabled_booted");
						abort(); 
				}
		} while (0);
		return (&tcache_enabled_tls); 
}
static inline void tcache_enabled_tsd_set(tcache_enabled_t *val) { 
		do { 
				if (config_debug && !(tcache_enabled_booted)) {
						malloc_printf( "<jemalloc>: %s:%d: Failed assertion: \"%s\"\n", __FILE__, __LINE__, "tcache_enabled_booted");
						abort(); 
				}
		} while (0);
		tcache_enabled_tls = (*val); 
		if (malloc_tsd_no_cleanup != malloc_tsd_no_cleanup) {
				if (pthread_setspecific(tcache_enabled_tsd, (void *)(&tcache_enabled_tls))) {
						malloc_write("<jemalloc>: Error" " setting TSD for ""tcache_enabled""\n");
						if (opt_abort) 
								abort(); 
				}
		}
}

static inline _Bool quarantine_tsd_boot(void) { 
		if (quarantine_cleanup != malloc_tsd_no_cleanup) { 
				if (pthread_key_create(&quarantine_tsd, quarantine_cleanup) != 0)
						return (1);
		}
		quarantine_booted = 1;
		return (0);
}
static inline quarantine_t * * quarantine_tsd_get(void) {
		do {
				if (config_debug && !(quarantine_booted)) {
						malloc_printf( "<jemalloc>: %s:%d: Failed assertion: \"%s\"\n", __FILE__, __LINE__, "quarantine_booted"); 
						abort();
				}
		} while (0); 
		return (&quarantine_tls);
} 
static inline void quarantine_tsd_set(quarantine_t * *val) {
		do {
				if (config_debug && !(quarantine_booted)) { 
						malloc_printf( "<jemalloc>: %s:%d: Failed assertion: \"%s\"\n", __FILE__, __LINE__, "quarantine_booted");
						abort();
				} 
		} while (0);
		quarantine_tls = (*val);
		if (quarantine_cleanup != malloc_tsd_no_cleanup) {
				if (pthread_setspecific(quarantine_tsd, (void *)(&quarantine_tls))) {
						malloc_write("<jemalloc>: Error" " setting TSD for ""quarantine""\n");
						if (opt_abort)
								abort();
				}
		}
}

static __thread quarantine_t * __attribute__((tls_model("initial-exec"))) quarantine_tls = ((void *)0);
static pthread_key_t quarantine_tsd;
static _Bool quarantine_booted = 0;

