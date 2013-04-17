#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <limits.h>
#include <sys/types.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/mman.h>
#define Nthread 1

pthread_mutex_t mutex;

void* thread_start(void *arg){

		int id = *(int *)arg;
		
		void *p = (void*)je_malloc(20);
		void *p1 = (void*)je_malloc(2000);
		fprintf(stdout,"je_malloc: %llu\r\n",(uintptr_t)p);	
		fprintf(stdout,"je_malloc: %llu\r\n",(uintptr_t)p1);	
		return 0;

}

int main(int argc, char** argv){

		pthread_t thread[Nthread];
		pthread_attr_t  attr;
		pthread_attr_init(&attr);
		int th_para[Nthread];
		int i;
		int ret;
		for(i=0;i<Nthread;i++){

				th_para[i] = i;
				if ((ret = pthread_create(&thread[i], &attr, thread_start, (void *)&th_para[i])) != 0) {
						exit(1);
				}
		}	
		for(i=0;i<Nthread;i++)
				pthread_join(thread[i],0);

		return 0;

}

