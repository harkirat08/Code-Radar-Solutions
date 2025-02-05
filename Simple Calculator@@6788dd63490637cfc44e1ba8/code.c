#include <stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d\n %d\n",&a,&b);
    scanf("%c",&c);
    switch (c){
        case +:
        printf("%d\n",a+b);
        break;
        case -:
        printf("%d\n",a-b);
        break;
        case *:
        printf("%d\n",a*b);
        break;
        case /:
        if(b==0){
            printf("error");
        }
        else{
            printf("%d",a/b);
            break;
        }
        return 0;
    }
}