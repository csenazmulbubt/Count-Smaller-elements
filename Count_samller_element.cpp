#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    scanf("%d",&t);

      while(t--)
      {
          scanf("%d",&n);
          int a[n],count=0,i,j;

          for(i=0;i<n;i++)
          {
              scanf("%d",&a[i]);
          }

          for(i=0;i<n;i++)
          {
              count=0;
              for(j=i+1;j<n;j++)
              {
                  if(a[i]>a[j])
                  {
                      count++;
                  }
              }
              printf("%d ",count);

          }
          printf("\n");
      }
}
