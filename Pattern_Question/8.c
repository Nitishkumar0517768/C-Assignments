#include <stdio.h>
int main(){

    // Right angle triangle - Numbers

      int n; 
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}