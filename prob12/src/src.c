#include "general.h"

void overflow_() {
    char buffer[0x60];
    read(0, buffer, 0x100);
    char *s = buffer;
    if(strncmp(s++, "j", 1) == 0)
if(strncmp(s++, "a", 1) == 0)
if(strncmp(s++, "h", 1) == 0)
if(strncmp(s++, "s", 1) == 0)
if(strncmp(s++, "d", 1) == 0)
if(strncmp(s++, "k", 1) == 0)
if(strncmp(s++, "h", 1) == 0)
if(strncmp(s++, "q", 1) == 0)
if(strncmp(s++, "n", 1) == 0)
if(strncmp(s++, "m", 1) == 0)
if(strncmp(s++, ",", 1) == 0)
if(strncmp(s++, "n", 1) == 0)
if(strncmp(s++, "a", 1) == 0)
if(strncmp(s++, "d", 1) == 0)
if(strncmp(s++, "h", 1) == 0)
if(strncmp(s++, "1", 1) == 0)
if(strncmp(s++, "u", 1) == 0)
if(strncmp(s++, "2", 1) == 0)
if(strncmp(s++, "y", 1) == 0)
if(strncmp(s++, "j", 1) == 0)
if(strncmp(s++, "b", 1) == 0)
if(strncmp(s++, "a", 1) == 0)
if(strncmp(s++, ",", 1) == 0)
if(strncmp(s++, "d", 1) == 0)
if(strncmp(s++, "m", 1) == 0)
if(strncmp(s++, "n", 1) == 0)
if(strncmp(s++, ",", 1) == 0)
if(strncmp(s++, "a", 1) == 0)
if(strncmp(s++, "m", 1) == 0)
if(strncmp(s++, "s", 1) == 0)
if(strncmp(s++, "j", 1) == 0)
if(strncmp(s++, "d", 1) == 0)
if(strncmp(s++, "o", 1) == 0)
if(strncmp(s++, "i", 1) == 0)
if(strncmp(s++, "q", 1) == 0)
if(strncmp(s++, "e", 1) == 0)
if(strncmp(s++, "r", 1) == 0)
if(strncmp(s++, "b", 1) == 0)
if(strncmp(s++, "q", 1) == 0)
if(strncmp(s++, ",", 1) == 0)
if(strncmp(s++, "m", 1) == 0)
if(strncmp(s++, "b", 1) == 0)
if(strncmp(s++, "d", 1) == 0)
if(strncmp(s++, "i", 1) == 0)
if(strncmp(s++, "8", 1) == 0)
if(strncmp(s++, "u", 1) == 0)
if(strncmp(s++, "y", 1) == 0)
if(strncmp(s++, "a", 1) == 0)
if(strncmp(s++, "s", 1) == 0)
if(strncmp(s++, "h", 1) == 0)
if(strncmp(s++, "q", 1) == 0)
if(strncmp(s++, "j", 1) == 0)
if(strncmp(s++, "k", 1) == 0)
if(strncmp(s++, "n", 1) == 0)
if(strncmp(s++, "e", 1) == 0)
if(strncmp(s++, "i", 1) == 0)
if(strncmp(s++, "l", 1) == 0)
if(strncmp(s++, "l", 1) == 0)
if(strncmp(s++, "k", 1) == 0)
if(strncmp(s++, "a", 1) == 0)
if(strncmp(s++, "j", 1) == 0)
if(strncmp(s++, "f", 1) == 0)
if(strncmp(s++, "l", 1) == 0)
if(strncmp(s++, "k", 1) == 0)
if(strncmp(s++, "a", 1) == 0)
if(strncmp(s++, "j", 1) == 0)
if(strncmp(s++, "g", 1) == 0)
if(strncmp(s++, "g", 1) == 0)
if(strncmp(s++, "a", 1) == 0) {
	printf("buffer : %s\n", buffer);
	return 0;
}

exit(-1);
}

int main() {
    PWNINIT

    overflow_();
}
