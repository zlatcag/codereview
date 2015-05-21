#include <stdio.h>



int main(void)
{
	int fd;
        fd = open("/dev/zlc0",0);
	if(fd <0)
	{
		perror("openfail:");
	}
        return 0;
}
