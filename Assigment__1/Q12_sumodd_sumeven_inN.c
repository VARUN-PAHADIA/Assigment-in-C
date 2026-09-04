#include <stdio.h>
int main(){
    int n, evenSum=0 , oddSum=0;
    scanf("%d",&n);
    
    for(int i=1;i <=n;i++){
        if(i%2==0){
            evenSum +=i;
        }else{
            oddSum +=i;
        }
       
    }
    printf("Even number sum =%d\n", evenSum);
    printf("Odd number sum =%d\n", oddSum);
     return 0;

}