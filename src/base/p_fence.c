#include <pal.h>

#include <stdio.h>

#include "pal_base.h"
#include "pal_base_private.h"

/**
 *
 * A memory fence. Ensures that all read/write operations to memory object
 * from the processor exeucting the p_fence call have completed.
 *
 * @param mem   Memory object desciptor (int)
 *
 * @return      Returns 0 if successful.
 *
 */

int p_fence(p_mem_t mem)
{
    printf("Running p_fence(%p)\n", mem);
    return (0);
}
