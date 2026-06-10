#include <stdio.h>
long long factorial(int n){ return (n<=1)?1:n*factorial(n-1); }
int main(){ int n; scanf("%d",&n); printf("%lld",factorial(n)); return 0; }