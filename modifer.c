#include <stdio.h>

// in windows os it will try not gurrenties that
// it will provide the value of short nad long and 4 and 8
int main()
{
    int i=10;//4byte
    short int j= 20;//2byte
    long int k= 30;//8byte 

    printf ("size of int i: %lu\n",(sizeof(i)));
    printf ("size of int j: %lu\n",(sizeof(j)));
    printf ("size of int k: %lu\n",(sizeof(k)));
    return 0;
}