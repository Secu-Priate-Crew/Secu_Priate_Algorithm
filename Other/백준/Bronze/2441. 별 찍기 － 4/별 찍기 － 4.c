#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        for(int ii=0; ii<i; ii++){
            printf(" ");
        }for(int j=n; j>i; j--){
            printf("*");
        }printf("\n");
    }

}