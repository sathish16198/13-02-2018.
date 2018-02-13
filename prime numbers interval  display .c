#include <stdio.h>
int main()
{
  int n1,n2,i,j,flag=0;
  
  scanf("%d %d",&n1,&n2);
  
  for(i=n1;i<=n2;i++)
  {
      for(j=2;j<=(n1/2);j++)
      {
          if((i%j)==0)
          {
              flag=1;
              break;
          }
          else
          {
              flag=0;
          }
      }
       if(flag==0)
        {
            printf("%d\n",i);
        }
  }
   return 0;
}
