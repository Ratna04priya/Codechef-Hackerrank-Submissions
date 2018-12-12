//Encoder-oct-18.p2 - https://www.codechef.com/ENCO2018/problems/PNTWLL

 

#include<stdio.h>

int colour(int x,int y,int a[50],int b[50])
{
    int temp,count=1;
   for(int i=0;i<x;i++)
  {
     for(int j=0;j<i;j++)
     {
            if(a[i]>=a[j])
            {
		b[j]=b[i];
            }
     }
   }

/*for(int i=0;i<x;i++)
{
   printf("%d",b[i]);
}
printf("\n");
*/
//sorting b array
 for(int i=0;i< x;i++)
    {
        for(int j=i+1;j< x;j++)
        {
            if(b[i]>b[j])
            {
                temp    =b[i];
                b[i]  =b[j];
                b[j]  =temp;
            }
        }
    }

/*for(int i=0;i<x;i++)
{
   printf("%d",b[i]);
}

*/
//counting unique elements

for(int i = 0; i < x -1; i++)
    {
     if(b[i]==b[i+1])
       continue;
     else
       count++;
    }

 return count;

}




int main()
{
   int n,x,y,a[50],b[50],res[50];
   
   scanf("%d",&n);

   for(int i=1;i<=n;++i)
  {
    scanf("%d%d",&x,&y);
     for(int j=0;j<x;++j)
    {
        scanf("%d",&a[j]);
	
    }
   for(int j=0;j<x;++j)
    {
         scanf("%d",&b[j]);
	
    }

    res[i] = colour(x,y,a,b);

  }

   for(int i=1;i<=n;++i)
 {
    printf("%d\n",res[i]);
 }
return 0;
}







