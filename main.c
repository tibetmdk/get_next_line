#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int main()
{
	int fd = open("tiebt.txt", O_RDWR, 0777);
	get_next_line(fd);
}