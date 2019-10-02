#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,i;
    cin>>a>>b;
    for(i=a;i<=b;i++)
    {
        int j=i;
        int x=j*j;
        int c=0;
        while(j>0)
        {
            c++;
            j=j/10;
        }
        int p,q,m;
        long int y=pow(10,c);
        if(c%2==0)
            m=y+1;
        else
            m=y;

        p=x%m;
        q=x/m;

        int u=p+q;
        if(u==i)
        {
            cout<<i<<" ";

        }
    }
}
