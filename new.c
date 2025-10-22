#include<stdio.h>
#include<stdlib.h>
int main(){

    int size =0;
    int *p=NULL;
    int cnt=0;

    printf("enter the no of elements");
    scanf("%d",&size);

    p=(int *)malloc(size *sizeof(int));

    if (p==NULL){
      printf("no memory allocation \n");
      return 1;
    };
    printf("enter the elements");
    for (cnt=0;cnt<size;cnt++){
        scanf("%d",&p[cnt]);

    };
    printf("the input elments are \n ");
    for (cnt=0;cnt<size;cnt++){ 
        printf("%d ", p[cnt]);
    }
    




return 0;

}