#include <stdio.h>
int main(){
    int s;
    scanf("%d",&s);
    if(s<=0){
        printf("Freezing");
    }
    else{
        printf("Above Freezing");
    }
    return 0;
}