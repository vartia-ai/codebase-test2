// stuff.h

typedef int global_stuff_type;

struct global_stuff_struct
{
    int x;
    int y;
};

int func_in_stuff_h()
{
    return -1;
}

// Public function prototypes
global_stuff_type public_stuff_func1();
void public_stuff_func2();
