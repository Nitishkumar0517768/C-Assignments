#include <stdio.h>
int main(){

    // Right angle triangle - Alphabets

      int n; 
    printf("Enter the number: ");
    scanf("%d",&n);

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<=i; j++){
    //         char ch = ('A' + j);
    //         printf("%c ",ch);
    //     }
    //     printf("\n");
    // }


    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            int a = 64 + j; 
            char ch = (char)a;
            printf("%c ",ch);
        }
        printf("\n");
    }

    return 0;
}