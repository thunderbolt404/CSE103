#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int key,found=0;
    printf("Enter the element to search:");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            printf("FOUND at index position:%d\n",i);
            found=1;
        }
    }
    if(!found){
        printf("NOT FOUND");
    }
    return 0;
}