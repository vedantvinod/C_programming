#include <stdio.h>
#pragma pack(1)//no need of sequene initialization
struct demo {

    int i;

    char ch2;
    int j;
    char ch;
};
int main ()
{   
     printf("size of struct demo :%lu\n",sizeof(struct demo));   
   

    return 0;
}