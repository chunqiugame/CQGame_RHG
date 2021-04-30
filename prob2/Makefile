all:
	mkdir -p bin
	cc src/src.c -o bin/prob -I ../util -pie -fpie -fno-stack-protector -z execstack
	strip -s bin/prob

debug:
	mkdir -p bin
	cc src/src.c -o bin/prob_debug -I ../util -g -pie -fpie -fno-stack-protector -z execstack

clean_debug:
	rm -rf bin/prob_debug
