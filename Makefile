# Top level makefile, the real shit is at src/Makefile

default: all

.DEFAULT:
	cd src && $(MAKE) $@
	gcc -g3 -O0 main.c deps/jemalloc/lib/libjemalloc.a -pthread -I deps/jemalloc/include -lm

install:
	cd src && $(MAKE) $@

.PHONY: install
