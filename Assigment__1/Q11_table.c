#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("%d table is \n",n);
    for(int i=1;i <=10;i++){
        n=n*i;
        printf("%d\n",n);
        n=n/i;
    } return 0;

}