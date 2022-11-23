#include<stdio.h>
int main()
{
  int a[]={1,2,3,3};
  int i, j, freq=0;
  for(i=0; i<4; i++)
  {
    for(j=i+1; j<=4; j++)
    {
      freq=0;
      if(i!=j)
      {
         if(a[i]==a[j])
         {
           count++;
         }
      }
      
    }
  }
  if(count==0)
  {
  printf("%d ",a[i]);
  }
  return 0;
}
