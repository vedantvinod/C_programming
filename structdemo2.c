#include <stdio.h>
struct demo {

    int i;
    float k;
    int j;
};
int main ()
{   
    struct demo obj;
    obj.i=11;
    obj.k=90.90f;
    obj.j=21;

    printf("%d\n",obj.i);   
    printf("%f\n",obj.k);
    printf("%d\n",obj.j);
    return 0;
}