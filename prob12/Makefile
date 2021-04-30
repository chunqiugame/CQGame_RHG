all:
	mkdir -p bin
	cc -m32 -O0 src/src.c -o bin/prob -I ../util  -fno-stack-protector -z execstack -static
	strip -s bin/prob

debug:
	mkdir -p bin
	cc -m32 -O0 src/src.c -o bin/prob_debug -I ../util -fno-stack-protector -z execstack -static
clean_debug:
	rm -rf bin/prob_debug
