all:
	mkdir -p bin
	cc src/src.c -o bin/prob -I ../util -pie -fpie -fno-stack-protector
	strip -s bin/prob

debug:
	mkdir -p bin
	cc src/src.c -o bin/prob_debug -I ../util -pie -fpie -g -fno-stack-protector

clean_debug:
	rm -rf bin/prob_debug
