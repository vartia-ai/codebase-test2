// things.h

typedef double global_things_type;

struct global_things_struct
{
    double x;
    double y;
};

int func_in_things_h(global_things_type t, struct global_things_struct s)
{
    return (int)t + (int)s.x;
}

// Public function prototypes
global_things_type public_things_func1();
void public_things_func2();
