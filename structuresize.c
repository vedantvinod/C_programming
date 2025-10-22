#include <stdio.h>
struct demo {

    int i;
    char ch;
    float k;
    int j;
};
int main ()
{   
   printf("size of structure if %lu\n",sizeof(struct demo));
   
    return 0;
}