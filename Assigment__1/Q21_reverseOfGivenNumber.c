#include <stdio.h>
int main (){
    int n =143 , rem , rever= 0;
    while (n!=0){
        rem = n%10;
        
        rever = rever*10 +rem; 
        n=n/10;
    }
    printf ("revers of number =%d", rever);
    return 0;
}