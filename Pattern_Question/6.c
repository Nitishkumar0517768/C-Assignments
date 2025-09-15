#include <stdio.h>
int main(){

    // Square of Alphabets

      int n; 
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            char ch = ('A' + j);
            printf("%c ",ch);
        }
        printf("\n");
    }

    return 0;
}