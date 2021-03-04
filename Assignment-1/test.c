#include "String.h"
#include "myutils.h"
#include <stdlib.h>
#include <stdio.h>
int main()
{

int n = 5, k = 1; int res=0;
int num_fact = 5;
int num_prime = 123;
int num_pall = 1235321;
char s1[20]="pooja";
char s2[20]="shri";

//utility

printf("the factorial of %d is:", num_fact);
int factorial(num_fact);
int isprime(num_prime);
int ispallindrom();
printf("\n");
printf("%d is the value of sum",vsum(4,5,2,9,20));

//string

if(mystrcmp(s1,s2)==0)
printf("equal\n");
else
printf("Not equal\n");
mystrcat(s1,s2);
printf("s1=%s,s2=%s\n",s1,s2);
int n1=mystrlen(s1);
printf("n1=%d\n",n1);
mystrcpy(s2,s1);
printf("s2=%s\n",s2);

//bitmask

printf("%d with %d-th bit Set: %d\n",n, k, set(n, k));
printf("%d with %d-th bit Cleared: %d\n",n, k, clear(n, k));
printf("%d with %d-th bit Toggled: %d\n",n, k, flip(n, k));
res=query(n, k);
if(res)
    printf("SET");
else
    printf("NOTSET");

return 0;

}
