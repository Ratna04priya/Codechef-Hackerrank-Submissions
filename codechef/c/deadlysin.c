""" Problem Statement : Meliodas and Ban are fighting over chocolates. Meliodas has X chocolates, while Ban has Y. Whoever has lesser number of chocolates eats as many chocolates as he has from the other's collection. This eatfest war continues till either they have the same number of chocolates, or atleast one of them is left with no chocolates.
Can you help Elizabeth predict the total no of chocolates they'll be left with at the end of their war? """






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
