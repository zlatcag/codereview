#include <stdio.h>



int main(void)
{
	int fd;
        fd = open("/dev/zlc0",0);
	if(fd <0)
	{
		perror("111 222 333 444 openfail:");
		printf("555\n");
		exit(1);
	}
        return 0;
}
