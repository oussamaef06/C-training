#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,fact;
    printf("donner un nmbr:");
    scanf("%d", &n);
    fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("%d!= %d\n",n,fact);
    return 0;
}
