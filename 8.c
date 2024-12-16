#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int A[n];
    int B[n];
    printf("Enter the elements of Array A:");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
        B[n-1-i] = A[i];
    }
    printf("Array A: ");
    for(int i=0;i<n;i++) printf("%d ",A[i]);
    printf("\nArray B: ");
    for(int i=0;i<n;i++) printf("%d ",B[i]);
    return 0;
}