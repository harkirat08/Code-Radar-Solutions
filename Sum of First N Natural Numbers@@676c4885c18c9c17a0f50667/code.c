#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int s = n*(n+1)/2){
        printf("%d",s);
    }
return 0;
}