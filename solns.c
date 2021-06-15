/* Enter your solutions in this file */
#include <stdio.h>
//avg function//
 
float average(int a[],int p)
{
  int sum=0;
  float avg=0;
  for(int i=0;i<p;i++)
  {
    sum+=a[i];
  }
  avg=sum/p;
  return avg;
}
// factor//

int isprime(int i)
{
 int a=0;
 for(int j=2;j<i;j++)
 {
  if(i%j==0)
  {
   a=1;
   break;
  }
  if(a==0)
   return 1;
  else 
   return 0;
 }
  
int factors(int p,int a[])
{
   int c=0,i=2;
   while(i<p)
  {
   if(p%i==0)
     if(isprime(i)==1)
     {
      a[c]=i;
      c++;
      p=p/i;
      if(isprime(p)==1)
       {
       a[c++]=p;
       break;
       }
      i=2;
     }
   else continue;
   else
    i++;
  }
  return c;
}
  
 // max Function//
int max(int a[],int p)
{
  int maximum=0;
  for (int i=0;i<p;i++)
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


//mode function//

int mode(int a[],int p)
{
  int big=max(a,p);
  int small=min(a,p);
  int count[100],b=-1;
  for(int i=small;i<=big;i++)
  {
    int c=0;
    for (int j=0;j<p;j++)
   {
     if(a[j]==i)
      c++;
   }
    count[++b]=c;
  }
 int abig=0,d=0;
 for(int i=0;i<=b;i++)
 {
   if(count[i]>abig)
  {
   abig=count[i];
   d=i-(0-small);
  }
   else
   continue;
 }
 return d;

} 

