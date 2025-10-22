#include <stdio.h>
struct demo {

    int i;
    char ch;
    char ch2;
    int j;
};
int main ()
{   
     printf("size of struct demo :%lu\n",sizeof(struct demo));   
   // printf ("size of object:%lu\n",sizeof(obj));
    

    return 0;
}