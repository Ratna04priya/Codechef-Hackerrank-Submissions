// Factorial of bigger numbers 
/*
 The numbers like factorial of n>20 can't be even stored in 64-bit numbers, Hence we use Big Integers for it.
ex:    Number is 352 , and we have to do 352*5
res[]= {2,5,3} ,Intially carry=0
i=0, prod=res[0]*x+carry   = 2*5+0=10
res[0]=0, carry =1

i=1, prod=res[1]*x+carry   = 5*5+1=26
res[1]=6, carry =2

i=2, prod=res[2]*x+carry   = 3*5+2=17
res[2]=7, carry =1

res[3]=carry=1

so res={0,6,7,1} and 352*5=1760.

*/

#include<stdio.h>

int multiply(int n,int res[],int fsize)
{
    int carry=0;
    for(int i=0;i<fsize;i++)
    {
        int prod= res[i]*n+carry;
        res[i]=prod % 10;
        carry=prod / 10; 
    }
    while(carry)
    {
        res[fsize]=carry % 10;
        carry = carry / 10;
        fsize++;
    }
    return fsize;
}
int factorial(int n)
{
    int res[150];
    res[0]=1;
    int fsize=1,i;
    for( i=2;i<=n;++i)
    {
        fsize=multiply(i,res,fsize);
    }
    for( i=fsize-1;i>=0;i--)
    {
        printf("%d",res[i]);
    }
    return 0;
}
int main()
{ int n;
 int f=1;
    scanf("%d",&n);
  factorial(n);
 return 0;
}
