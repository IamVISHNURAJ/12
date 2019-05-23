#include <stdio.h>
int main() 
{
int n,m,i,sum=0;
scanf("%d",&n);
m=n;
while(n>0)
{    
i=n%10;    
sum=(sum*10)+i;    
n=n/10;    
}   	
if (m==sum)
printf("yes");
else
printf("no");
return 0;
}