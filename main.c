// main.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stuff.h"
#include "things.h"

typedef unsigned int uint_t;

int main() 
{
    struct global_things_struct s;
    global_things_type t = 1.2;
    int h1 = func_in_stuff_h();
    int h2 = func_in_things_h(t, s);

    printf("h1=%d, h2=%d\n", h1, h2);
    return 0;
}
