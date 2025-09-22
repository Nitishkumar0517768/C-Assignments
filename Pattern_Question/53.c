#include <stdio.h>
int main(){

    // Pyramid with Continuous Numbers

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    int a = 1;

    for(int i=1; i<=n; i++){
        for(int j=i; j<n; j++){
            printf("  ");
        }
        for(int k=1; k<=2*i-1; k++){
            printf("%d ",a);
            a = a + 1;
        }
        printf("\n");
    }

    return 0;
}