#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int A[n];
    printf("Enter elements:");
    for(int i=0;i<n;i++) scanf("%d",&A[i]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            printf("(%d,%d)",A[i],A[j]);
            if(!(i == n - 2 && j == n - 1)) printf(",");
        }
    }
    return 0;
}