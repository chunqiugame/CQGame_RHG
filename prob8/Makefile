all:
	mkdir -p bin
	cc src/src.c -o bin/prob -I ../util -fno-stack-protector -z execstack -pie -fpie
	strip -s bin/prob

debug:
	mkdir -p bin
	cc src/src.c -o bin/prob_debug -I ../util -g -fno-stack-protector -pie -fpie

clean_debug:
	rm -rf bin/prob_debug
