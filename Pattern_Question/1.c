#include <stdio.h>
int main(){

    // Single Row of Stars

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        printf("*");
    }
    return 0;
}