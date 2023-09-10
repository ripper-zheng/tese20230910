#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))





int n,m;
int a[1000];
int b[1000];
int c[1000];
int temp=0;
int cul_c(int c)
{
    if(c==0)return 1;
    if(c==1)
    {
        return a[1];
    }
    else
    {
        return a[c]*cul_c(c-1);
    }
    
}

int fuck(int i)
{    
    if(i==1)return m%c[i]/c[i-1];
    
    else return (m%c[i]-m%c[i-1])/c[i-1];
        
        
}

int main()
{
    int i,j;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)scanf("%d",&a[i]);
    
    for(i=0;i<=n;i++)
    {
        c[i]=cul_c(i);
        
    }
   
    for(i=1;i<=n;i++)
    {
        
        b[i]=fuck(i);
        
         printf("%d ",b[i]);
       
    }
    
   
    
    
    
    return 0;
}
