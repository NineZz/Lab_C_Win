#include <stdio.h>
#include <stdlib.h>

int factorial(int n);
int power(int x, int n);

void main(){
    int x,n,fac;
    int ns = 0;
    printf("Enter X :  \n");
    scanf("%d", &x);
    printf("Enter N :  \n");
    scanf("%d", &n);
    for(int i = n ; i > 0 ; i--){
        ns+=power(x,i)/factorial(i);
    }
    printf("%d",ns);
}

int power(int x, int n){
    if(n<0)
        return 1 / power (x,-n);
    else if(n==0)
        return 1;
    else if(n==1)
        return x;
    else
        return x*power(x, n-1);
}

int factorial(int n){
    int fac = 1;
    for(int i=1; i <= n; i++){
        fac = fac*i;
    }
    return fac;
}
