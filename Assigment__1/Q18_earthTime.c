#include <stdio.h>
int main(){
    int n =31558150, days , hours , minutes ;
    days = n/(24*60*60);
    n=n%(365*24*60*60);
    hours = n/(60*60);
    n=n%(60*60);
    minutes= n/(60);
    printf("days=%d : hours=%d : minutes=%d", days , hours, minutes);
    
return 0;
}