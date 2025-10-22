#include <stdio.h>
int main(){
    //base adress of aaray is always constant it cant be updated
    double arr[]={10.0,20.0,30.0,40.0};
   printf("size of arr:%lu\n",sizeof(arr));
   arr++;
    return 0;
}