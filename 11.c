#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int A[n];
    printf("Enter elements:");
    for(int i=0;i<n;i++) scanf("%d",&A[i]);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(A[j] > A[j+1]){
                int temp= A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++) printf("%d ",A[i]);
    return 0;
}