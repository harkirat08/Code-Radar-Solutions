#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[];
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int large=0;
    int small=0;
    for(int j = 0; j<n; j++){
        if(arr[i]>large){
            large = arr[i];
        }
        else if(arr[i]<small){
            small = arr[i];
        }
    }
return 0;
}