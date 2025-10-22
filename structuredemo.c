#include <stdio.h>
struct demo {

    int i;
    float k;
    int j;
};
int main ()
{   
    struct demo obj;

    printf("size of struct demo :%lu\n",sizeof(struct demo));   
    printf ("size of object:%lu\n",sizeof(obj));
    return 0;
}