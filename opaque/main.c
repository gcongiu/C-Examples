#include <stdio.h>
#include "opaque.h"

int main() {
        int v;
        opaque_t o;

        init_opaque(&o);
        set_opaque(o, 10);
        v = get_opaque(o);

        fprintf(stdout, "%d\n", v);

        fini_opaque(&o);

        return 0;
}
