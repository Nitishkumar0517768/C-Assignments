#include <stdio.h>
int main(){

    //Full pyramid-Alphabets(centerd)

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for(int j=i; j<n; j++){
            printf(" ");
        }
        for(int k=0; k<2*i-1; k++){
            char ch = ('A' + k);
            printf("%c",ch);
        }
        printf("\n");
    }

    return 0;
}
