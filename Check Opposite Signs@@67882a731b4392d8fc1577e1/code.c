#include <stdio.h>
int main(){
    int r,t;
    scanf("%d %d",&r,&t);
    if(r>0 && t<=0 ||t>0 && r<0){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}