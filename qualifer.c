#include<stdio.h>
int main(){
    int i = 10;
    const int j = 11;
    //below lines generate error coz of constant keyword 
    
    i++;
    j++;
    j=30;

    return 0;
}