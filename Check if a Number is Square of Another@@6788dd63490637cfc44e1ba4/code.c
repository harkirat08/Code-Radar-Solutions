#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(sqrt(a)*sqrt(a)==a){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}