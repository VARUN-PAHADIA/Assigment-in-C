#include <stdio.h>
int main(){
    int n, power = 1 , disum =0, rem;
    scanf("%d",&n);
    while(n>0){
        rem = n%10;
        disum += (rem);
        n/10;
    }
    printf("%d",disum);
    return 0;
}