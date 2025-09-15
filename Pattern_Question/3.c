#include <stdio.h>
int main(){

    //Single Row Alphabet

    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    
   

    // for(int i=1; i<=n; i++){
    //     int a = 64 + i; 
    //     char ch = (char)a;
    //     printf("%c ",ch);
    // }

    for(int i=0; i<n; i++){
        char ch = ('A' + i);
        printf("%c ",ch);
    }
    return 0;
}