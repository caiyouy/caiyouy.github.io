#include<stdio.h>

int perfect_or_not(int n)
{
  int sum=0;
  int m;
  for(m=1;m<=n;++m)
  {
    if(n%m==0)
    {
      sum = sum + m;
    }
    else{}
  }
  if((sum-2*n)>0) return 1;
  else if((sum-2*n)==0) return 0;
  else return -1;
}

void perfect(int n)
{
  int m;
  printf("1\n");
  for(m=1;m<=n;++m)
  {
    if (perfect_or_not(m)==0) printf("%d\n",m);
    else {}
  }
}


void class(int a,int b)
{
  int m=0,n=0,p=0,t;
  for(t=a;t<=b;++t)
  {
    if(perfect_or_not(t)==-1){m=m+1;}
    else if(perfect_or_not(t)==0){n=n+1;}
    else{p=p+1;}
  }
  printf("from %d to %d: %d %d %d\n",a,b,m,n,p);
}

int main()
{
  int n;
  perfect(1000);
  for(n=1001;n<10000;n=n+1000)
  {class(n,n+999);}
  for(n=10001;n<100000;n=n+10000)
  {class(n,n+9999);}
  return 0;
}
