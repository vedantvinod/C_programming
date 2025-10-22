#include <stdio.h>
struct demo {

    int i;
    float f;
};
struct hello {

    int no;
    float marks;
    struct demo dobj;//nasted 
};
int main ()
{    

    printf("size of hello sturcture is: %lu\n",sizeof(struct hello));

    
    return 0;
}