#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int max1=INT_MIN , max2=INT_MIN , maxindex=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
            maxindex=i;
        }
        else if(arr[i]>max2 && arr[i]!=max1){
            max2=arr[i];
        }
    }
    printf("Max: %d, Index: %d\n",max1,maxindex);
    printf("Second Max: %d",max2);
    return 0;
}