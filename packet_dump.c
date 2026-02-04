#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>

#include "packet_dump.h"

void packet_dump(char* buf, int size, int unit)
{
	char tmp[150];
	char msg[256];
	int i, j, lno;

	j = 7;
	lno = 0;
	memset((tmp+0), 0x00, 150);

	for (i = 0; i < size; i++)
	{
		if((i%unit) == 0)
			memset((tmp+0), 0x20, ((unit*3)+unit+1+7+3));

		if(j == 7)
			sprintf((tmp+0), "[%4d] ", lno);

		sprintf((tmp+j), "%02x", (unsigned char)*(buf+i));
		tmp[j+2] = 0x20;

		if((unsigned char)*(buf+i) >= (unsigned char)*(buf+i))
			tmp[(j/3)+(unit*3)+1+6] = *(buf+i);
		else
			tmp[(j/3)+(unit*3)+1+6] = '.';
		j += 3;

		if((i%unit) == (unit-1)) {
			printf("%s\n", (tmp+0));
			j = 7;
			++lno;
		}
		else if((i%unit) == ((unit/2)-1))
			tmp[j-1] = '-';
	}

	if ((i % unit) != 0) {
		printf("%s\n", (tmp + 0));
	}
}
		

