#include <stdio.h>

int main() {
    int n,m;
    printf("Enter the number of elements of Array A:");
    scanf("%d",&n);
    printf("Enter the number of elements of Array B:");
    scanf("%d",&m);
    int A[n],B[m];
    printf("Enter the elements of Array A:");
    for(int i=0;i<n;i++) scanf("%d",&A[i]);
    printf("\nEnter the elements of Array B:");
    for(int i=0;i<n;i++) scanf("%d",&B[i]);
    for(int i=0;i<n;i++){
        int temp= A[i];
        A[i] = B[i];
        B[i] = temp;
    }
    printf("Array A:");
    for(int i=0;i<n;i++) printf("%d ",A[i]);
    printf("\nArray B:");
    for(int i=0;i<n;i++) printf("%d ",B[i]);

    return 0;
}