/* Enter your solutions in this file */
#include <stdio.h>
 // max Function//
int max(int a[],int p)
{
  int maximum=0;
  for (int i=0;i<p:i++)
  {
    if (a[i]>maximum)
        maximum=a[i];
    else 
      continue;
  }
  return maximum;
}

//min function//

int min(int a[],int p)
{
   int minimum=0;
   for(int i=0;i<p;i++)
   {
     if (a[i]<minimum)
       minimum=a[i];
     else 
         continue;
   }
  return minimum;
}
//avg function//
 
float average(int a[],int p)
{
  int sum=0;
  float avg=0;
  for(int i=0;i<n;i++)
  {
    sum+=a[i];
  }
  avg=sum/p;
  return avg;
}

//mode function//
