#include <stdlib.h>
#include "transparent.h"
#include "opaque.h"

void init_opaque(opaque_t *o) {
        struct transparent *t;
        t = (struct transparent *)malloc(sizeof(struct transparent));
        t->a = -1;
        *o = t;
}

void fini_opaque(opaque_t *o) {
        struct transparent *t;
        t = *o;
        free(t);
}

void set_opaque(opaque_t o, int value) {
        struct transparent *t = (struct transparent *)o;
        t->a = value;
}

int get_opaque(opaque_t o) {
        struct transparent *t = (struct transparent *)o;
        return t->a;
}
