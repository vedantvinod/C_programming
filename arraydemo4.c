#include <stdio.h>
int main(){
    int arr [4]={10,20,30,40};
    printf("size of arr: %lu\n",sizeof(arr));//16 byte
    printf("arr %lu\n",(arr));
    printf("&arr %lu\n",&(arr));
    
    printf("&arr+1%lu\n",&(arr)+1);
    printf("arr+1 %lu\n",(arr)+1);
    return 0;
}