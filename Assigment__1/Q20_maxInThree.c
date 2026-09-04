#include <stdio.h>
int main (){
    int a=3,b=1,c=2;
    if (a>b){
        if(a>c){
            printf("max is= %d",a);
        }else{
             printf("max is= %d",c);
        }

    }else if(b>c){
         printf("max is= %d",b);
    }else{
         printf("max is= %d",c);
    }
    return 0;
}