#include <stdio.h>
int main(){
    int g;
    scanf("%d",&g);
    if(g>0){
        printf("Positive");
    }
    else if(g==0){
        printf("Zero");
    }
    else{
        printf("Negative");
    }
    return 0;
}