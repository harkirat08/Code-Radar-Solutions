#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int large=arr[0];
    int small=arr[0];
    for(int i = 0; i<n; i++){
        if(large<arr[i]){
            large = arr[i];
        }
        else if(arr[i]<small){
            small = arr[i];
        }
    }
    printf("%d %d",small,large);
return 0;
}