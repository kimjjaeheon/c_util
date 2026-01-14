#ifndef __ALLOC_WARPPER_H__
#define __ALLOC_WARPPER_H__

/* malloc 실패 시
 * assert 시켜버림 */
void* safe_malloc(size_t size);

void safe_free(void* p);

#endif
