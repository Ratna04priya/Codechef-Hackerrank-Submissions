""" Problem Statement : https://www.codechef.com/problems/SINS/ """






#include <stdio.h>
int main()
{
	int  t;
	scanf("%d", &t);
	while(t--)
	{
		long int x, y, s;
		scanf("%ld%ld", &x, &y);
		
		
		
		do
		{
			s = x%y;
			x = y;
			y = s;
		}while(s!=0);
		printf("%ld\n", x*2);
   }
return 0;
}
