#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int min1=INT_MAX , min2=INT_MAX , minindex=-1;
    for(int i=0;i<n;i++){
        if(arr[i]<min1){
            min2=min1;
            min1=arr[i];
            minindex=i;
        }
        else if(arr[i]<min2 && arr[i]!=min1){
            min2=arr[i];
        }
    }
    printf("Min: %d, Index: %d\n",min1,minindex);
    printf("Second Min: %d",min2);
    return 0;
}