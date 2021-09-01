#include "index_iterator.h"
#include "redisearch.h"
#include "spec.h"

typedef struct {
    size_t id;
    float score;
} VecSimQueryResult;


/* Create a new ListIterator */
IndexIterator *NewListIterator(void *list, size_t len);
