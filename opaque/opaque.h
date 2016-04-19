typedef struct transparent *opaque_t;

void init_opaque(opaque_t *);
void fini_opaque(opaque_t *);
void set_opaque(opaque_t, int);
int get_opaque(opaque_t);
