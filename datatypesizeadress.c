#include <stdio.h>


int main ()
{
    char cvalue = 'c';//here the veriable is local and got the memory in stack 

    int ivalue =11;
    float fvalue =90.20f;
    double dvalue = 98.987579;
    printf ("%d\n",ivalue);
    printf ("%c\n",cvalue);
    printf ("%f\n",fvalue);
    printf ("%lf\n",dvalue);

     //printf ("size of charector is :%lu\n",sizeof(cvalue));
    // printf ("size of integer is :%lu\n",sizeof(ivalue));
     //printf ("size of float is :%lu\n",sizeof(fvalue));
     //printf ("size of double is :%lu\n",sizeof(dvalue));


     printf ("adress of cvalue is :%lu\n",&cvalue);
     printf ("adress of dvalue is :%lu\n",&dvalue);
     printf ("adress of ivalue is :%lu\n",&ivalue);
     printf ("adress of fvalue is :%lu\n",&fvalue);
    return 0;
}