#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void* safe_malloc(size_t size)
{
	void* p = malloc(size);
	assert(p);
	return p;
}

void safe_free(void* p)
{
	free(p);
}
