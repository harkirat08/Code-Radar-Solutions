#include <stdio.h>
int main(){
    int x,c;
    scanf("%d %d",&x,&c);
    if(x>0 && c<0 || x==0 && c==0)
    printf("True");
    else
    printf("False");
    return 0;
}