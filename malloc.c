#include <stdio.h>
#include <stdlib.h>


int main(){
    int isize=0;
    int *arr=NULL;


    printf("enter the number of elements");
    scanf("%d",&isize); 
    arr=(int *)malloc(isize * sizeof(int));

    //allocate the memory 
    if (arr==NULL){
        printf("unable to allocate the memory\n");
       
    }
    else{
        printf("%p memory is alllocated \n the address of memory is : ",void*)arr););
    }
    //use the memory 
    //for (arr=0;arr<isize;arr++){



   // }
    //free the memory 
    free(arr);





    return 0;
}